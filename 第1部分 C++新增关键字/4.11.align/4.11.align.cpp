#include <iostream>

using namespace std;

struct s1
{
	char a;
	int b;
	double c;

} __attribute__((aligned(32)));


#pragma pack(1)
struct s2
{
	char a;
	short b;
	short c;

};
#pragma pack()



struct alignas(8) s3
{
	char a;
	short b;
	char c;
	int d;

};


int main(void)
{
	//alignof测试一个类型怎样对齐
	cout << "alignof = " << alignof(s1) << endl;
	cout << "sizeof = " << sizeof(s1) << endl;
	cout << "alignof = " << alignof(s2) << endl;
	cout << "sizeof = " << sizeof(s2) << endl;
	cout << "alignof = " << alignof(s3) << endl;
	cout << "sizeof = " << sizeof(s3) << endl;
	return 0;
}