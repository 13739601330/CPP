
//using NS1::func2; //2
//using namespace NS1; //3
void func1(void);
namespace NS2
{
	extern void func2(void);

	extern void func3(void);
	
}

using namespace NS2;
void func3(void);

int main(int argc, char const *argv[])
{
	//func1();
	//NS1::func2(); //1 作用域解析符
	//func2();
	//NS2:func2();
	NS2::func3();
	return 0;
}


namespace NS1
{
	void func2(void)
	{
		::func1();
		func1();
	
	}

};

void func1(void)
{

}
