#include <iostream>

using namespace std;


int main(void)
{
	/*
//C中mallolc
	int a; //a是分配在栈上面
	//a分配在堆中，p分配在栈上
	int *p = (int *)malloc(4); 
	*p = 5;
	free(p);
	*/

	//C++ new delete

	//p本身分配在栈上，p指向的4个字节分配在堆
	int *p = new int;
	*p = 5;
	cout << "p = " << p << ", *p = " << *p <<endl;
	delete p;




	return 0;
}