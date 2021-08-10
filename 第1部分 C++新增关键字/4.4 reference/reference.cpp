#include <iostream>

using namespace std;

void swap(int a, int b);
void swap1(int *pa, int *pb);
void swap2(int &pa, int &pb);


int main(int argc, char const *argv[])
{
	int x = 4, y = 6;
	swap(x, y);
	cout << "x = " << x << endl << "y = " << y << endl;
	
	swap1(&x, &y);
	cout << "x = " << x << endl << "y = " << y << endl;

	swap2(x, y);
	cout << "x = " << x << endl << "y = " << y << endl;
	

	int &b1 = x;// 定义了一个引用符号，叫b1，关联到x，更像一个别名
	/* 
	必须在定义时初始化，只能关联一次，以后也不能更改，之后的更改就是直接更改所指向的变量
	低配版指针，更加安全
	*/
	b1 = 44;
	cout << "x:" << x << endl;


	return 0;
}

//failed 
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//success指针
void swap1(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//success 引用
void swap2(int &pa, int &pb) //pa是一个引用  这里的&表示引用，不表示取地址，两者无关，是独立的功能
{
	int temp;
	temp = pa;
	pa = pb;
	pb = temp;
}

