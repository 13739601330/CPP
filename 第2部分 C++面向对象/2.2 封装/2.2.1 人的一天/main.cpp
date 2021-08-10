#include "person.hpp"

int main(void)
{
	//person zhangsan = new person();//堆
	person *zhangsan = new person("lisi");



	zhangsan->eat();
	zhangsan->work();
	zhangsan->eat();
	zhangsan->sleep();
	zhangsan->work();
	zhangsan->eat();
	zhangsan->sleep();

	return 0;
}