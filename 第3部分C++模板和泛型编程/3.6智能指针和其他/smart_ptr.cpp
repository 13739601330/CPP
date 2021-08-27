#include <iostream>

using namespace std;



class Testptr
{
public:
	Testptr()
	{
		cout << "默认构造"  << endl;
		p = NULL;
	};
	Testptr(int size)
	{
		cout << "重载构造"  << endl;
		p = new int[size];
	};
	~Testptr()
	{
		cout << "析构函数"  << endl;
		if(p != NULL)
		{
			delete[] p;
		}
	};

	void print(void)
	{
		if(p != NULL)
		{
			cout << "p[0] = " << p[0] << endl;
		}
		else
		{
			cout << "p == NULL"  << endl;
		}
		
	}
private:
	int *p;
};



int main(void)
{
    Testptr p(5);

    p.print();
	return 0;
}