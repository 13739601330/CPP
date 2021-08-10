//假设两个LED1,2. 
//延时1s钟

#include <stdio.h>
#include <unistd.h>

typedef void (*pfunc_on_t)(void);
typedef void (*pfunc_off_t)(void);

void on(void)
{
	printf("led_on\r\n");
}
void off(void)
{
	printf("led_off\r\n");
}
//定义对象 

struct led
{
	//属性


	//方法
	//1亮
	pfunc_on_t von;  
	//2灭
	pfunc_off_t voff;

};










int main(void)
{
		struct led led1;
		struct led led2;
		struct led led3;

		led1.von = on;
		led1.voff = off;

		led2.von = on;
		led2.voff = off;
		
		led3.von = on;
		led3.voff = off;
		
	while(1)
	{

		led1.von();
		led2.voff();
		led3.voff();
		sleep(1);

		
		led1.voff();
		led2.von();
		led3.voff();
		sleep(1);


		led1.voff();
		led2.voff();
		led3.von();
		sleep(1);
	}
	
	return 0;
}


