#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "shuai guo";
	char rstr[16] = {0};



	fstream fs; // 定义了一个fs对象用来做后续操作
	fs.open("1.txt", ios_base::in);
	if (fs.is_open())
	{
		cout << "success" << endl;
	}
	else
	{
		cout << "fail" << endl;
	}
//文件写入
	//fs.write(str, sizeof(str));
	//fs << "shuai guo" << endl; 
//文件读出
	//fs.read(rstr, sizeof(rstr));
	fs >> rstr;  //读到第一个空格处
	cout << "read :" << rstr << endl;
//文件关闭
	fs.close();
	return 0;
}