/****************************************************************************************
@file     main.c
@brief    工程主函数文件
@author   盛洁
@version  V1.0
@introduction LCD测试
*****************************************************************************************/

#include "sys.h"
#include "delay.h"
#include "led.h"
#include "key.h"
#include "lcd.h"
#include "font.h"
#include "usart.h"

int main(){
	LED_Init();
	KEY_Init();
	delay_init();
	uart_init(115200);
	LCD_Init();
	POINT_COLOR=RED;
	BACK_COLOR=GREEN;
	while(1)
	{
		LCD_ShowBMP(20,20,(u8 **) logo,200,625,0); 
		LCD_ShowString(20,250,150,20,24,"HELLO WORLD!");		
	}
	return 0;
}

