#include "led.h"
#include "sys.h"

void LED_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOD, ENABLE); 

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;        
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;  
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
    GPIO_Init(GPIOA, &GPIO_InitStructure);            
    GPIO_SetBits(GPIOA, GPIO_Pin_8);                  

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2; 
    GPIO_Init(GPIOD, &GPIO_InitStructure);    
    GPIO_SetBits(GPIOD, GPIO_Pin_2);         
}

void LED0_ON(void){
	PAout(8)=0;
} 
void LED0_OFF(void){
	PAout(8)=1;
} 
void LED1_ON(void){
	PDout(2)=0;
} 
void LED1_OFF(void){
	PDout(2)=1;
} 
void LED0_SW(void){
	PAout(8)=!PAout(8);
} 
void LED1_SW(void){
	PDout(2)=!PDout(2);
} 

