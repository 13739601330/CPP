#include <iostream>

using namespace std;

int main(void)
{
/*
	//提示用户输入两个数
	cout << "输入两个数" << endl;
	//定义两个变量接收用户输入的数
	int a = 0, b = 0;

	cin >> a >> b ;
	cout << "a / b = " << a/b << endl;

	cout << "---next----" << endl;

	*/


	//提示用户输入两个数
	cout << "输入两个数" << endl;
	//定义两个变量接收用户输入的数
	int a = 0, b = 0;

	cin >> a >> b ;

	try
	{
		if (0 == b )
			throw(-1);
        cout << "a / b = " << a/b << endl;
	}
	catch(int e)
	{
		cout << "catch int e" << endl;
	}


	

	cout << "---next----" << endl;
	return 0;
}
