//假设两个LED1,2. 
//延时1s钟

#include <stdio.h>
#include <unistd.h>

void LED1_ON_LED2_OFF(void);
void LED2_ON_LED1_OFF(void);



int main(void)
{
	while(1)
	{
		LED1_ON_LED2_OFF();
		sleep(1);
		
		LED2_ON_LED1_OFF();
		sleep(1);
	}
	
	return 0;
}

void LED1_ON_LED2_OFF(void)
{
	printf("LED1_ON\r\n");
	printf("LED2_OFF\r\n");
	
};
void LED2_ON_LED1_OFF(void)
{
	printf("LED1_OFF\r\n");
	printf("LED2_ON\r\n");
};