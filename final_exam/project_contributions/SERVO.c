#include "main.h"
#include "stm32f7xx_hal.h"
#include "stm32746g_discovery.h"
#include "SERVO.h"
#include "STEPPER.h"

void Servo_Init() {
	__HAL_RCC_GPIOF_CLK_ENABLE();

	Servo.Pin = GPIO_PIN_8;
	Servo.Mode = GPIO_MODE_AF_PP;
	Servo.Speed = GPIO_SPEED_HIGH;
	Servo.Alternate = GPIO_AF9_TIM13;

	HAL_GPIO_Init(GPIOF, &Servo);
}

void Servo_Timer_Init() {
	__HAL_RCC_TIM13_CLK_ENABLE();

	ServoTimHandle.Instance               = TIM13;
	ServoTimHandle.Init.Period            = 100 - 1;
	ServoTimHandle.Init.Prescaler         = 21600 - 1;
	ServoTimHandle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	ServoTimHandle.Init.CounterMode 	  = TIM_COUNTERMODE_UP;

	sConfigServo.OCMode = TIM_OCMODE_PWM1;
	sConfigServo.Pulse = 0;

	HAL_TIM_PWM_Init(&ServoTimHandle);
	HAL_TIM_PWM_ConfigChannel(&ServoTimHandle, &sConfigServo, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&ServoTimHandle, TIM_CHANNEL_1);

}

void Z_Axis(int state) {
	if (state == CurrentPosition.Z) {return;}
	switch (state) {
		case 0:
			TIM13->CCR1 = 4;
			HAL_Delay(400);
			TIM13->CCR1 = 0;
			CurrentPosition.Z = 0;  // pen is in state: down
			printf("Pen is down: %d\n", CurrentPosition.Z);
			Refresh_Coordinates(CurrentPosition.X, CurrentPosition.Y, CurrentPosition.Z);
			break;

		case 1:
			TIM13->CCR1 = 12;
			HAL_Delay(400);
			TIM13->CCR1 = 0;
			CurrentPosition.Z = 1;  // pen is in state: up
			printf("Pen is up: %d\n", CurrentPosition.Z);
			Refresh_Coordinates(CurrentPosition.X, CurrentPosition.Y, CurrentPosition.Z);
			break;

		default:
			break;
	}
}
