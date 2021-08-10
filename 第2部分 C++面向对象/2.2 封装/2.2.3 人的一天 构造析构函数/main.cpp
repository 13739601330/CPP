#include "person.hpp"

int main(void)
{
	person chenshuai("晨帅", 22, true);
    person zhangsan("帅锅", 25, true);//堆
//person *zhangsan = new person("lisi");


    zhangsan.print_info();
	zhangsan.eat();
	zhangsan.work();
	zhangsan.sleep();

    chenshuai.print_info();
    chenshuai.eat();
	chenshuai.work();
	chenshuai.sleep();
	//用完对象后自动销毁

#if 0	
	//person zhangsan = new person();//堆
	person *zhangsan = new person("lisi");



	zhangsan->eat();
	zhangsan->work();
	zhangsan->eat();
	zhangsan->sleep();
	zhangsan->work();
	zhangsan->eat();
	zhangsan->sleep();
	//用完对象后销毁
	delete zhangsan;
#endif
	return 0;
}