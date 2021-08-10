#include <iostream>
#include <unistd.h>

using namespace std;

class led
{
public:
	int index; //表示当前LED的编号

	void on(void);
	void off(void);
};

void led::on(void)
{
	cout << "led_" << this->index <<"on" << endl;
}
void led::off(void) 
{
	cout << "led_" << this->index <<"off" << endl;
}


int main(void)
{
	led led1, led2, led3;
	led1.index = 1;
	led2.index = 2;
	led3.index = 3;
	while (1)
	{

		led1.on();
		led2.off();
		led3.off();
		sleep(1);

		led1.off();
		led2.on();
		led3.off();
		sleep(1);

		led1.off();
		led2.off();
		led3.on();
		sleep(1);		
	}

	return 0;
}