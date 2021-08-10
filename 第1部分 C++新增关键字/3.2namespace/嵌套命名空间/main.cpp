#include <iostream>

using namespace std;


namespace NS1
{
	void func2(void)
	{
		cout << "func2 in NS1" << endl;
	}
	namespace NS2
	{

		void func2(void)
		{
			cout << "func2 in NS2, NS1" << endl;
		}

		void func1(void)
		{
			func2();
		}



	}


}








int main(int argc, char const *argv[])
{
	NS1::NS2::func1();
	return 0;
}