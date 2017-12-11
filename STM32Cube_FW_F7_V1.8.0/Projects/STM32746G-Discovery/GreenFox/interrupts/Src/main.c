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

UART_HandleTypeDef uart_handle;
GPIO_InitTypeDef led0;
GPIO_InitTypeDef led1;
GPIO_InitTypeDef led2;
TIM_HandleTypeDef Tim0Handle;
TIM_HandleTypeDef Tim1Handle;
TIM_HandleTypeDef Tim2Handle;
TIM_OC_InitTypeDef s0Config;
TIM_OC_InitTypeDef s1Config;
TIM_OC_InitTypeDef s2Config;

/* Private function prototypes -----------------------------------------------*/

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

void EXTI9_5_IRQHandler();
void EXTI0_IRQHandler();
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void TIM2_IRQHandler();

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

	BSP_PB_Init(BUTTON_WAKEUP, BUTTON_MODE_EXTI);

	/* Add your application code here
	 */
	BSP_LED_Init(LED_GREEN);

	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);

	__HAL_RCC_TIM1_CLK_ENABLE();
	__HAL_RCC_TIM2_CLK_ENABLE();
	__HAL_RCC_TIM3_CLK_ENABLE();

	Tim0Handle.Instance               = TIM3;
	Tim0Handle.Init.Period            = 1646;
	Tim0Handle.Init.Prescaler         = 1;
	Tim0Handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Tim0Handle.Init.CounterMode 		 = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&Tim0Handle);
	HAL_TIM_Base_Start_IT(&Tim0Handle);

	HAL_TIM_PWM_Init(&Tim0Handle);

	s0Config.OCMode = TIM_OCMODE_PWM1;
	s0Config.Pulse = 1646;

	HAL_TIM_PWM_ConfigChannel(&Tim0Handle, &s0Config, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start_IT(&Tim0Handle, TIM_CHANNEL_1);

	Tim1Handle.Instance               = TIM1;
	Tim1Handle.Init.Period            = 1646;
	Tim1Handle.Init.Prescaler         = 1;
	Tim1Handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Tim1Handle.Init.CounterMode 		 = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&Tim1Handle);
	HAL_TIM_Base_Start_IT(&Tim1Handle);

	HAL_TIM_PWM_Init(&Tim1Handle);

	s1Config.OCMode = TIM_OCMODE_PWM1;
	s1Config.Pulse = 1646;

	HAL_TIM_PWM_ConfigChannel(&Tim1Handle, &s1Config, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start_IT(&Tim1Handle, TIM_CHANNEL_1);

	Tim2Handle.Instance               = TIM2;
	Tim2Handle.Init.Period            = 1646;
	Tim2Handle.Init.Prescaler         = 1;
	Tim2Handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Tim2Handle.Init.CounterMode 		 = TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&Tim2Handle);
	HAL_TIM_Base_Start_IT(&Tim2Handle);

	HAL_TIM_PWM_Init(&Tim2Handle);

	s2Config.OCMode = TIM_OCMODE_PWM1;
	s2Config.Pulse = 1646;

	HAL_TIM_PWM_ConfigChannel(&Tim2Handle, &s2Config, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start_IT(&Tim2Handle, TIM_CHANNEL_1);

	__HAL_RCC_GPIOB_CLK_ENABLE();

	led0.Pin = GPIO_PIN_4;
	led0.Mode = GPIO_MODE_AF_PP;
	led0.Pull = GPIO_NOPULL;
	led0.Speed = GPIO_SPEED_HIGH;
	led0.Alternate = GPIO_AF2_TIM3;

	HAL_GPIO_Init(GPIOB, &led0);

	__HAL_RCC_GPIOA_CLK_ENABLE();

	led1.Pin = GPIO_PIN_8;
	led1.Mode = GPIO_MODE_AF_PP;
	led1.Pull = GPIO_NOPULL;
	led1.Speed = GPIO_SPEED_HIGH;
	led1.Alternate = GPIO_AF1_TIM1;

	HAL_GPIO_Init(GPIOA, &led1);

	led2.Pin = GPIO_PIN_15;
	led2.Mode = GPIO_MODE_AF_PP;
	led2.Pull = GPIO_NOPULL;
	led2.Speed = GPIO_SPEED_HIGH;
	led2.Alternate = GPIO_AF1_TIM2;

	HAL_GPIO_Init(GPIOA, &led2);

	/*HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);*/

	printf("\n-----------------WELCOME-----------------\r\n");
	printf("**********in STATIC interrupts WS**********\r\n\n");

	while (1) {

		set_RGB(128,0,0);
				set_RGB(139,0,0);
				set_RGB(165,42,42);
				set_RGB(178,34,34);
				set_RGB(220,20,60);
				set_RGB(255,0,0);
				set_RGB(255,99,71);
				set_RGB(255,127,80);
				set_RGB(205,92,92);
				set_RGB(240,128,128);
				set_RGB(233,150,122);
				set_RGB(250,128,114);
				set_RGB(255,160,122);
				set_RGB(255,69,0);
				set_RGB(255,140,0);
				set_RGB(255,165,0);
				set_RGB(255,215,0);
				set_RGB(184,134,11);
				set_RGB(218,165,32);
				set_RGB(238,232,170);
				set_RGB(189,183,107);
				set_RGB(240,230,140);
				set_RGB(128,128,0);
				set_RGB(255,255,0);
				set_RGB(154,205,50);
				set_RGB(85,107,47);
				set_RGB(107,142,35);
				set_RGB(124,252,0);
				set_RGB(127,255,0);
				set_RGB(173,255,47);
				set_RGB(0,100,0);
				set_RGB(0,128,0);
				set_RGB(34,139,34);
				set_RGB(0,255,0);
				set_RGB(50,205,50);
				set_RGB(144,238,144);
				set_RGB(152,251,152);
				set_RGB(143,188,143);
				set_RGB(0,250,154);
				set_RGB(0,255,127);
				set_RGB(46,139,87);
				set_RGB(102,205,170);
				set_RGB(60,179,113);
				set_RGB(32,178,170);
				set_RGB(47,79,79);
				set_RGB(0,128,128);
				set_RGB(0,139,139);
				set_RGB(0,255,255);
				set_RGB(0,255,255);
				set_RGB(224,255,255);
				set_RGB(0,206,209);
				set_RGB(64,224,208);
				set_RGB(72,209,204);
				set_RGB(175,238,238);
				set_RGB(127,255,212);
				set_RGB(176,224,230);
				set_RGB(95,158,160);
				set_RGB(70,130,180);
				set_RGB(100,149,237);
				set_RGB(0,191,255);
				set_RGB(30,144,255);
				set_RGB(173,216,230);
				set_RGB(135,206,235);
				set_RGB(135,206,250);
				set_RGB(25,25,112);
				set_RGB(0,0,128);
				set_RGB(0,0,139);
				set_RGB(0,0,205);
				set_RGB(0,0,255);
				set_RGB(65,105,225);
				set_RGB(138,43,226);
				set_RGB(75,0,130);
				set_RGB(72,61,139);
				set_RGB(106,90,205);
				set_RGB(123,104,238);
				set_RGB(147,112,219);
				set_RGB(139,0,139);
				set_RGB(148,0,211);
				set_RGB(153,50,204);
				set_RGB(186,85,211);
				set_RGB(128,0,128);
				set_RGB(216,191,216);
				set_RGB(221,160,221);
				set_RGB(238,130,238);
				set_RGB(255,0,255);
				set_RGB(218,112,214);
				set_RGB(199,21,133);
				set_RGB(219,112,147);
				set_RGB(255,20,147);
				set_RGB(255,105,180);
				set_RGB(255,182,193);
				set_RGB(255,192,203);
				set_RGB(250,235,215);
				set_RGB(245,245,220);
				set_RGB(255,228,196);
				set_RGB(255,235,205);
				set_RGB(245,222,179);
				set_RGB(255,248,220);
				set_RGB(255,250,205);
				set_RGB(250,250,210);
				set_RGB(255,255,224);
				set_RGB(139,69,19);
				set_RGB(160,82,45);
				set_RGB(210,105,30);
				set_RGB(205,133,63);
				set_RGB(244,164,96);
				set_RGB(222,184,135);
				set_RGB(210,180,140);
				set_RGB(188,143,143);
				set_RGB(255,228,181);
				set_RGB(255,222,173);
				set_RGB(255,218,185);
				set_RGB(255,228,225);
				set_RGB(255,240,245);
				set_RGB(250,240,230);
				set_RGB(253,245,230);
				set_RGB(255,239,213);
				set_RGB(255,245,238);
				set_RGB(245,255,250);
				set_RGB(112,128,144);
				set_RGB(119,136,153);
				set_RGB(176,196,222);
				set_RGB(230,230,250);
				set_RGB(255,250,240);
				set_RGB(240,248,255);
				set_RGB(248,248,255);
				set_RGB(240,255,240);
				set_RGB(255,255,240);
				set_RGB(240,255,255);
				set_RGB(255,250,250);
				set_RGB(0,0,0);
	}
}

void set_RGB(uint32_t red, uint32_t green, uint32_t blue)
{
	TIM1->CCR1 = (red * 6.4);
	TIM2->CCR1 = (green * 6.4);
	TIM3->CCR1 = (blue * 6.4);

	HAL_Delay(100);
}


/*void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	event++;
	if (TIM1->CCR1 > 1) {
		TIM1->CCR1 = TIM1->CCR1 - 1;
	} else {
		TIM1->CCR1 = 0;
	}
	printf("Interrupt event: %d.\nPulse rate set to: %d.\n", event, (TIM1->CCR1));
}*/

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
