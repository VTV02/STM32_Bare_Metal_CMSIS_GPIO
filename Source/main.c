#include<stm32f411xe.h>


int main(void)
{
	/*Enable Reset Clock Control*/
	RCC->AHB1ENR |=(1U<<0);
	/*Configure PORTA as Output function*/
	GPIOA->MODER|=(1U<<10);
	GPIOA->MODER&=~(1U<<11);
	while(1)
	{
		GPIOA->ODR|=(1U<<5);
		for(int i=0;i<100000;i++);
		GPIOA->ODR&=~(1U<<5);
		for(int i=0;i<100000;i++);
	}



}
