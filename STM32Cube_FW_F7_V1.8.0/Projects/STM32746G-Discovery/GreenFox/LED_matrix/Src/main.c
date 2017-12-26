/**
 ******************************************************************************
 * @file    Templates/Src/main.c
 * @author  MCD Application Team
 * @version V1.0.3
 * @date    22-April-2016
 * @brief   STM32F7xx HAL API Template project
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <string.h>

/** @addtogroup STM32F7xx_HAL_Examples
 * @{
 */

/** @addtogroup Templates
 * @{
 */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef TimHandle;
TIM_HandleTypeDef Tim2Handle;
TIM_HandleTypeDef Tim3Handle;
UART_HandleTypeDef uart_handle;
GPIO_InitTypeDef Column;
GPIO_InitTypeDef Row_1_3;
GPIO_InitTypeDef Row_4_7;
GPIO_InitTypeDef button;

uint32_t delay = 0;
uint32_t counter1 = 0;
uint32_t counter2 = 0;
uint32_t counter3 = 0;

volatile uint32_t timIntPeriod;

/* Private function prototypes -----------------------------------------------*/

void Interrupt_Timer_Init();
void Interrupt_Timer_Deinit();
void Interrupt_Timer2_Init();
void Interrupt_Timer2_Deinit();
void Interrupt_Timer3_Init();
void Interrupt_Timer3_Deinit();
void Button_Init();
void Column_Init();
void Row_Init();
void TIM2_IRQHandler();
void TIM3_IRQHandler();
void TIM4_IRQHandler();
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void C1_On();
void C2_On();
void C3_On();
void C4_On();
void C5_On();
void C1_Off();
void C2_Off();
void C3_Off();
void C4_Off();
void C5_Off();
void R1_On();
void R2_On();
void R3_On();
void R4_On();
void R5_On();
void R6_On();
void R7_On();
void R1_Off();
void R2_Off();
void R3_Off();
void R4_Off();
void R5_Off();
void R6_Off();
void R7_Off();
void Toggle_LED01();
void Toggle_LED02();
void Toggle_LED03();
void Toggle_LED04();
void Toggle_LED05();
void Toggle_LED06();
void Toggle_LED07();
void Toggle_LED08();
void Toggle_LED09();
void Toggle_LED10();
void Toggle_LED11();
void Toggle_LED12();
void Toggle_LED13();
void Toggle_LED14();
void Toggle_LED15();
void Toggle_LED16();
void Toggle_LED17();
void Toggle_LED18();
void Toggle_LED19();
void Toggle_LED20();
void Toggle_LED21();
void Toggle_LED22();
void Toggle_LED23();
void Toggle_LED24();
void Toggle_LED25();
void Toggle_LED26();
void Toggle_LED27();
void Toggle_LED28();
void Toggle_LED29();
void Toggle_LED30();
void Toggle_LED31();
void Toggle_LED32();
void Toggle_LED33();
void Toggle_LED34();
void Toggle_LED35();
void Letter_A();
void Letter_B();
void Letter_C();
void Letter_D();
void Letter_E();
void Letter_F();
void Letter_G();
void Letter_H();
void Letter_I();
void Letter_J();
void Letter_K();
void Letter_L();
void Letter_M();
void Letter_N();
void Letter_O();
void Letter_P();
void Letter_Q();
void Letter_R();
void Letter_S();
void Letter_T();
void Letter_U();
void Letter_V();
void Letter_W();
void Letter_X();
void Letter_Y();
void Letter_Z();
void Letter_a();
void Letter_e();
void Display_Balint();
void Display_Benedek();
void Display_Adel();


#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

/* Private functions ---------------------------------------------------------*/

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
int main(void) {
	/* This project template calls firstly two functions in order to configure MPU feature
	 and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
	 These functions are provided as template implementation that User may integrate
	 in his application, to enhance the performance in case of use of AXI interface
	 with several masters. */

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	/* STM32F7xx HAL library initialization:
	 - Configure the Flash ART accelerator on ITCM interface
	 - Configure the Systick to generate an interrupt each 1 msec
	 - Set NVIC Group Priority to 4
	 - Low Level Initialization
	 */
	HAL_Init();

	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

	/* Add your application code here
	 */

	Interrupt_Timer_Init();
	Column_Init();
	Row_Init();

	while (1) {
		Letter_e();
	}
}

void Interrupt_Timer_Init()
{
	__HAL_RCC_TIM2_CLK_ENABLE();

	TimHandle.Instance               = TIM2;
	TimHandle.Init.Period            = 8000;
	TimHandle.Init.Prescaler         = 6750;
	TimHandle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	TimHandle.Init.CounterMode 		 = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&TimHandle);
	HAL_TIM_Base_Start_IT(&TimHandle);

	HAL_NVIC_SetPriority(TIM2_IRQn, 0x0F, 0x00);
	HAL_NVIC_EnableIRQ(TIM2_IRQn);
}

void Interrupt_Timer_Deinit()
{
		HAL_TIM_Base_DeInit(&TimHandle);
		HAL_TIM_Base_Stop_IT(&TimHandle);
}

void Interrupt_Timer2_Init()
{
	__HAL_RCC_TIM3_CLK_ENABLE();

	Tim2Handle.Instance               = TIM3;
	Tim2Handle.Init.Period            = 8000;
	Tim2Handle.Init.Prescaler         = 6750;
	Tim2Handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Tim2Handle.Init.CounterMode 	  = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&Tim2Handle);
	HAL_TIM_Base_Start_IT(&Tim2Handle);

	HAL_NVIC_SetPriority(TIM3_IRQn, 0x0F, 0x00);
	HAL_NVIC_EnableIRQ(TIM3_IRQn);
}

void Interrupt_Timer2_Deinit()
{
	HAL_TIM_Base_DeInit(&Tim2Handle);
	HAL_TIM_Base_Stop_IT(&Tim2Handle);
}

void Interrupt_Timer3_Init()
{
	__HAL_RCC_TIM2_CLK_ENABLE();

	Tim3Handle.Instance               = TIM4;
	Tim3Handle.Init.Period            = 8000;
	Tim3Handle.Init.Prescaler         = 6750;
	Tim3Handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Tim3Handle.Init.CounterMode 	  = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&Tim3Handle);
	HAL_TIM_Base_Start_IT(&Tim3Handle);

	HAL_NVIC_SetPriority(TIM4_IRQn, 0x0F, 0x00);
	HAL_NVIC_EnableIRQ(TIM4_IRQn);
}

void Interrupt_Timer3_Deinit()
{
	HAL_TIM_Base_DeInit(&Tim3Handle);
	HAL_TIM_Base_Stop_IT(&Tim3Handle);
}

void Button_Init()
{
	__HAL_RCC_GPIOI_CLK_ENABLE();

	button.Pin = GPIO_PIN_1 | GPIO_PIN_2;
	button.Mode = GPIO_MODE_IT_RISING;
	button.Pull = GPIO_PULLUP;
	button.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOI, &button);
}

void Column_Init()
{
	__HAL_RCC_GPIOF_CLK_ENABLE();

	Column.Pin = GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10;
	Column.Mode = GPIO_MODE_OUTPUT_PP;
	Column.Pull = GPIO_PULLDOWN;
	Column.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOF, &Column);
}

void Row_Init()
{
	__HAL_RCC_GPIOA_CLK_ENABLE();

	Row_1_3.Pin = GPIO_PIN_0 | GPIO_PIN_8 | GPIO_PIN_15;
	Row_1_3.Mode = GPIO_MODE_OUTPUT_PP;
	Row_1_3.Pull = GPIO_PULLUP;
	Row_1_3.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOA, &Row_1_3);

	__HAL_RCC_GPIOB_CLK_ENABLE();

	Row_4_7.Pin = GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_14 | GPIO_PIN_15;
	Row_4_7.Mode = GPIO_MODE_OUTPUT_PP;
	Row_4_7.Pull = GPIO_PULLUP;
	Row_4_7.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOB, &Row_4_7);
}

void TIM2_IRQHandler()
{
	HAL_TIM_IRQHandler(&TimHandle);
}

void TIM3_IRQHandler()
{
	HAL_TIM_IRQHandler(&Tim2Handle);
}

void TIM4_IRQHandler()
{
	HAL_TIM_IRQHandler(&Tim3Handle);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (htim == &TimHandle) {
		counter1++;
	} else if (htim == &Tim2Handle) {
		counter2++;
	} else {
		counter3++;
	}
}

void C1_On()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_SET);
}

void C2_On()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
}

void C3_On()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
}

void C4_On()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
}

void C5_On()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
}

void C1_Off()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_RESET);
}

void C2_Off()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
}

void C3_Off()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
}

void C4_Off()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
}

void C5_Off()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
}

void R1_On()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void R2_On()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void R3_On()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void R4_On()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void R5_On()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void R6_On()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void R7_On()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);
}

void R1_Off()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
}

void R2_Off()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
}

void R3_Off()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
}

void R4_Off()
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
}

void R5_Off()
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
}

void R6_Off()
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
}

void R7_Off()
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void Toggle_LED01()
{
	C1_On();
	R1_On();
	HAL_Delay(delay);
	C1_Off();
	R1_Off();
	HAL_Delay(delay);
}

void Toggle_LED02()
{
	C2_On();
	R1_On();
	HAL_Delay(delay);
	C2_Off();
	R1_Off();
	HAL_Delay(delay);
}

void Toggle_LED03()
{
	C3_On();
	R1_On();
	HAL_Delay(delay);
	C3_Off();
	R1_Off();
	HAL_Delay(delay);
}

void Toggle_LED04()
{
	C4_On();
	R1_On();
	HAL_Delay(delay);
	C4_Off();
	R1_Off();
	HAL_Delay(delay);
}

void Toggle_LED05()
{
	C5_On();
	R1_On();
	HAL_Delay(delay);
	C5_Off();
	R1_Off();
	HAL_Delay(delay);
}

void Toggle_LED06()
{
	C1_On();
	R2_On();
	HAL_Delay(delay);
	C1_Off();
	R2_Off();
	HAL_Delay(delay);
}

void Toggle_LED07()
{
	C2_On();
	R2_On();
	HAL_Delay(delay);
	C2_Off();
	R2_Off();
	HAL_Delay(delay);
}

void Toggle_LED08()
{
	C3_On();
	R2_On();
	HAL_Delay(delay);
	C3_Off();
	R2_Off();
	HAL_Delay(delay);
}

void Toggle_LED09()
{
	C4_On();
	R2_On();
	HAL_Delay(delay);
	C4_Off();
	R2_Off();
	HAL_Delay(delay);
}

void Toggle_LED10()
{
	C5_On();
	R2_On();
	HAL_Delay(delay);
	C5_Off();
	R2_Off();
	HAL_Delay(delay);
}

void Toggle_LED11()
{
	C1_On();
	R3_On();
	HAL_Delay(delay);
	C1_Off();
	R3_Off();
	HAL_Delay(delay);
}

void Toggle_LED12()
{
	C2_On();
	R3_On();
	HAL_Delay(delay);
	C2_Off();
	R3_Off();
	HAL_Delay(delay);
}

void Toggle_LED13()
{
	C3_On();
	R3_On();
	HAL_Delay(delay);
	C3_Off();
	R3_Off();
	HAL_Delay(delay);
}

void Toggle_LED14()
{
	C4_On();
	R3_On();
	HAL_Delay(delay);
	C4_Off();
	R3_Off();
	HAL_Delay(delay);
}

void Toggle_LED15()
{
	C5_On();
	R3_On();
	HAL_Delay(delay);
	C5_Off();
	R3_Off();
	HAL_Delay(delay);
}

void Toggle_LED16()
{
	C1_On();
	R4_On();
	HAL_Delay(delay);
	C1_Off();
	R4_Off();
	HAL_Delay(delay);
}

void Toggle_LED17()
{
	C2_On();
	R4_On();
	HAL_Delay(delay);
	C2_Off();
	R4_Off();
	HAL_Delay(delay);
}

void Toggle_LED18()
{
	C3_On();
	R4_On();
	HAL_Delay(delay);
	C3_Off();
	R4_Off();
	HAL_Delay(delay);
}

void Toggle_LED19()
{
	C4_On();
	R4_On();
	HAL_Delay(delay);
	C4_Off();
	R4_Off();
	HAL_Delay(delay);
}

void Toggle_LED20()
{
	C5_On();
	R4_On();
	HAL_Delay(delay);
	C5_Off();
	R4_Off();
	HAL_Delay(delay);
}

void Toggle_LED21()
{
	C1_On();
	R5_On();
	HAL_Delay(delay);
	C1_Off();
	R5_Off();
	HAL_Delay(delay);
}

void Toggle_LED22()
{
	C2_On();
	R5_On();
	HAL_Delay(delay);
	C2_Off();
	R5_Off();
	HAL_Delay(delay);
}

void Toggle_LED23()
{
	C3_On();
	R5_On();
	HAL_Delay(delay);
	C3_Off();
	R5_Off();
	HAL_Delay(delay);
}

void Toggle_LED24()
{
	C4_On();
	R5_On();
	HAL_Delay(delay);
	C4_Off();
	R5_Off();
	HAL_Delay(delay);
}

void Toggle_LED25()
{
	C5_On();
	R5_On();
	HAL_Delay(delay);
	C5_Off();
	R5_Off();
	HAL_Delay(delay);
}

void Toggle_LED26()
{
	C1_On();
	R6_On();
	HAL_Delay(delay);
	C1_Off();
	R6_Off();
	HAL_Delay(delay);
}

void Toggle_LED27()
{
	C2_On();
	R6_On();
	HAL_Delay(delay);
	C2_Off();
	R6_Off();
	HAL_Delay(delay);
}

void Toggle_LED28()
{
	C3_On();
	R6_On();
	HAL_Delay(delay);
	C3_Off();
	R6_Off();
	HAL_Delay(delay);
}

void Toggle_LED29()
{
	C4_On();
	R6_On();
	HAL_Delay(delay);
	C4_Off();
	R6_Off();
	HAL_Delay(delay);
}

void Toggle_LED30()
{
	C5_On();
	R6_On();
	HAL_Delay(delay);
	C5_Off();
	R6_Off();
	HAL_Delay(delay);
}

void Toggle_LED31()
{
	C1_On();
	R7_On();
	HAL_Delay(delay);
	C1_Off();
	R7_Off();
	HAL_Delay(delay);
}

void Toggle_LED32()
{
	C2_On();
	R7_On();
	HAL_Delay(delay);
	C2_Off();
	R7_Off();
	HAL_Delay(delay);
}

void Toggle_LED33()
{
	C3_On();
	R7_On();
	HAL_Delay(delay);
	C3_Off();
	R7_Off();
	HAL_Delay(delay);
}

void Toggle_LED34()
{
	C4_On();
	R7_On();
	HAL_Delay(delay);
	C4_Off();
	R7_Off();
	HAL_Delay(delay);
}

void Toggle_LED35()
{
	C5_On();
	R7_On();
	HAL_Delay(delay);
	C5_Off();
	R7_Off();
	HAL_Delay(delay);
}

void Letter_A()
{
	Toggle_LED03();
	Toggle_LED07();
	Toggle_LED09();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED18();
	Toggle_LED19();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED31();
	Toggle_LED35();
}

void Letter_B()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED06();
	Toggle_LED09();
	Toggle_LED11();
	Toggle_LED14();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED18();
	Toggle_LED19();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED31();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_C()
{
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED16();
	Toggle_LED21();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_D()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED06();
	Toggle_LED09();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED29();
	Toggle_LED31();
	Toggle_LED32();
	Toggle_LED33();
}

void Letter_E()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED11();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED18();
	Toggle_LED21();
	Toggle_LED26();
	Toggle_LED31();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
	Toggle_LED35();
}

void Letter_F()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED11();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED18();
	Toggle_LED21();
	Toggle_LED26();
	Toggle_LED31();
}

void Letter_G()
{
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED16();
	Toggle_LED18();
	Toggle_LED19();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_H()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED18();
	Toggle_LED19();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED31();
	Toggle_LED35();
}

void Letter_I()
{
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED08();
	Toggle_LED13();
	Toggle_LED18();
	Toggle_LED23();
	Toggle_LED28();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_J()
{
	Toggle_LED05();
	Toggle_LED10();
	Toggle_LED15();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_K()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED09();
	Toggle_LED11();
	Toggle_LED13();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED21();
	Toggle_LED23();
	Toggle_LED26();
	Toggle_LED29();
	Toggle_LED31();
	Toggle_LED35();
}

void Letter_L()
{
	Toggle_LED01();
	Toggle_LED06();
	Toggle_LED11();
	Toggle_LED16();
	Toggle_LED21();
	Toggle_LED26();
	Toggle_LED31();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
	Toggle_LED35();
}

void Letter_M()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED07();
	Toggle_LED09();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED13();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED31();
	Toggle_LED35();
}

void Letter_N()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED12();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED18();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED24();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED31();
	Toggle_LED35();
}

void Letter_O()
{
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_P()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED18();
	Toggle_LED19();
	Toggle_LED21();
	Toggle_LED26();
	Toggle_LED31();
}

void Letter_Q()
{
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED23();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED29();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED35();
}

void Letter_R()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED17();
	Toggle_LED18();
	Toggle_LED19();
	Toggle_LED21();
	Toggle_LED23();
	Toggle_LED26();
	Toggle_LED29();
	Toggle_LED31();
	Toggle_LED35();
}

void Letter_S()
{
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED12();
	Toggle_LED18();
	Toggle_LED24();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_T()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED05();
	Toggle_LED08();
	Toggle_LED13();
	Toggle_LED18();
	Toggle_LED23();
	Toggle_LED28();
	Toggle_LED33();
}

void Letter_U()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Letter_V()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED17();
	Toggle_LED19();
	Toggle_LED22();
	Toggle_LED24();
	Toggle_LED28();
	Toggle_LED33();
}

void Letter_W()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED11();
	Toggle_LED15();
	Toggle_LED16();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED23();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED28();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED34();
}

void Letter_X()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED12();
	Toggle_LED14();
	Toggle_LED18();
	Toggle_LED22();
	Toggle_LED24();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED31();
	Toggle_LED35();
}

void Letter_Y()
{
	Toggle_LED01();
	Toggle_LED05();
	Toggle_LED06();
	Toggle_LED10();
	Toggle_LED12();
	Toggle_LED14();
	Toggle_LED18();
	Toggle_LED23();
	Toggle_LED28();
	Toggle_LED33();
}

void Letter_Z()
{
	Toggle_LED01();
	Toggle_LED02();
	Toggle_LED03();
	Toggle_LED04();
	Toggle_LED05();
	Toggle_LED10();
	Toggle_LED14();
	Toggle_LED18();
	Toggle_LED22();
	Toggle_LED26();
	Toggle_LED31();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
	Toggle_LED35();
}

void Letter_a()
{
	Toggle_LED04();
	Toggle_LED08();
	Toggle_LED11();
	Toggle_LED12();
	Toggle_LED13();
	Toggle_LED14();
	Toggle_LED20();
	Toggle_LED22();
	Toggle_LED23();
	Toggle_LED24();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED30();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
	Toggle_LED35();
}

void Letter_e()
{
	Toggle_LED04();
	Toggle_LED08();
	Toggle_LED12();
	Toggle_LED13();
	Toggle_LED14();
	Toggle_LED16();
	Toggle_LED20();
	Toggle_LED21();
	Toggle_LED22();
	Toggle_LED23();
	Toggle_LED24();
	Toggle_LED25();
	Toggle_LED26();
	Toggle_LED32();
	Toggle_LED33();
	Toggle_LED34();
}

void Display_Balint()
{

}

void Display_Benedek()
{

}

void Display_Adel()
{

}

/**
 * @brief  Retargets the C library printf function to the USART.
 * @param  None
 * @retval None
 */
PUTCHAR_PROTOTYPE {
	/* Place your implementation of fputc here */
	/* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
	HAL_UART_Transmit(&uart_handle, (uint8_t *) &ch, 1, 0xFFFF);

	return ch;
}

/**
 * @brief  System Clock Configuration
 *         The system Clock is configured as follow :
 *            System Clock source            = PLL (HSE)
 *            SYSCLK(Hz)                     = 216000000
 *            HCLK(Hz)                       = 216000000
 *            AHB Prescaler                  = 1
 *            APB1 Prescaler                 = 4
 *            APB2 Prescaler                 = 2
 *            HSE Frequency(Hz)              = 25000000
 *            PLL_M                          = 25
 *            PLL_N                          = 432
 *            PLL_P                          = 2
 *            PLL_Q                          = 9
 *            VDD(V)                         = 3.3
 *            Main regulator output voltage  = Scale1 mode
 *            Flash Latency(WS)              = 7
 * @param  None
 * @retval None
 */
static void SystemClock_Config(void) {
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* Enable HSE Oscillator and activate PLL with HSE as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 25;
	RCC_OscInitStruct.PLL.PLLN = 432;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 9;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/* activate the OverDrive to reach the 216 Mhz Frequency */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
	 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void) {
	/* User may add here some code to deal with this error */
	while (1) {
	}
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void) {
	MPU_Region_InitTypeDef MPU_InitStruct;

	/* Disable the MPU */
	HAL_MPU_Disable();

	/* Configure the MPU attributes as WT for SRAM */
	MPU_InitStruct.Enable = MPU_REGION_ENABLE;
	MPU_InitStruct.BaseAddress = 0x20010000;
	MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
	MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
	MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
	MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
	MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
	MPU_InitStruct.Number = MPU_REGION_NUMBER0;
	MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
	MPU_InitStruct.SubRegionDisable = 0x00;
	MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

	HAL_MPU_ConfigRegion(&MPU_InitStruct);

	/* Enable the MPU */
	HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void) {
	/* Enable I-Cache */
	SCB_EnableICache();

	/* Enable D-Cache */
	SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while (1)
	{
	}
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
