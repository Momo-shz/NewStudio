#include "LED.h"

#include "stm32f1xx_hal.h"


void LED_Light_ON_A0()
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
}
void LED_Light_OFF_A0()
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
}

void LED_Light_ON_A1()
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
}
void LED_Light_OFF_A1()
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
}

void LED_Light_ON_A2()
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
}
void LED_Light_OFF_A2()
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
}


void LED_Light_Reset_Init()
{
    LED_Light_OFF_A0();
    LED_Light_OFF_A2();
    LED_Light_OFF_A1();
}

void LED_Function_LightFlow_1()
{
    LED_Light_Reset_Init();
    LED_Light_ON_A0();
    HAL_Delay(200);
    LED_Light_ON_A1();
    HAL_Delay(200);
    LED_Light_ON_A2();
    HAL_Delay(200);

    LED_Light_OFF_A0();
    HAL_Delay(200);
    LED_Light_OFF_A1();
    HAL_Delay(200);
    LED_Light_OFF_A2();
    HAL_Delay(200);
}

void LED_Function_LightFlow_2()
{
    LED_Light_Reset_Init();
    LED_Light_ON_A0();
    HAL_Delay(100);
    LED_Light_OFF_A0();
    LED_Light_ON_A1();
    HAL_Delay(100);
    LED_Light_OFF_A1();
    LED_Light_ON_A2();
    HAL_Delay(100);
    LED_Light_OFF_A2();
}



void LED_Mainfunction_1_20ms(void)
{
    uint8_t cycleTime = 10;
    uint8_t i;
    for(i = 0; i < cycleTime; i++)
    {
        LED_Function_LightFlow_1();
    }

}

void LED_Mainfunction_2_20ms(void)
{
    uint8_t cycleTime = 10;
    uint8_t i;
    for(i = 0; i < cycleTime; i++)
    {
        LED_Function_LightFlow_2();
    }
}

