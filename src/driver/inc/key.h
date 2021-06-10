#ifndef __KEY_H
#define __KEY_H

#include "sys.h"

#define KEY0  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_5)
#define KEY1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_15)
#define WK_UP GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)
 
#define KEY0_PRES	1		//KEY0  
#define KEY1_PRES	2		//KEY1 
#define WKUP_PRES	3		//WK_UP  

typedef struct{
	void (*func1)(void);
	void (*func2)(void);
	void (*func3)(void);
}key_funcs;

void KEY_Init(void);
u8 KEY_Scan(void);//按键扫描，不需要支持连按 					    
void KEY_Function(key_funcs function);

#endif

