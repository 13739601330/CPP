//假设两个LED1,2. 
//延时1s钟

#include <stdio.h>
#include <unistd.h>

void LED1_ON(void);
void LED2_ON(void);
void LED3_ON(void);
int main(void)
{
	while(1)
	{
		LED1_ON();
		sleep(1);
		LED2_ON();
		sleep(1);
		LED3_ON();
		sleep(1);
	}
	
	return 0;
}


void led_ctrl(int led_num, int led_sta)
{
	printf("LED%d_%s\r\n", led_num, ( (0 == led_sta)?("OFF"):("ON") ));

}

void LED1_ON(void)
{
	led_ctrl(1,1);
	led_ctrl(2,0);
	led_ctrl(3,0);
	
};
void LED2_ON(void)
{
	led_ctrl(1,0);
	led_ctrl(2,1);
	led_ctrl(3,0);
};
void LED3_ON(void)
{
	led_ctrl(1,0);
	led_ctrl(2,0);
	led_ctrl(3,1);
};
