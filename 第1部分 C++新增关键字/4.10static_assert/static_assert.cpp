#include <iostream>

using namespace std;

int main(void)
{
	/*
	static_assert(5==6, "test" );//编译时报错，生效
	static_assert(5==5, "test" );
*/
	static_assert( sizeof(void *) == 4 , "不支持非32位系统" );
	return 0;
}