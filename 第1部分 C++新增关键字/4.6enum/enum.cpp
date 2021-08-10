#include <iostream>
using namespace std;

//  C / C++98
/*
enum day 
{
    MON,
    TUE,
    WEN
};
*/
//C++11后的新定义用法
enum class day : unsigned char
{
    MON,
    TUE,
    WEN
};

int main(int argc, char const *argv[])
{


   // enum day d1;
   //day d1; //C++可以直接用，不用typedef, 不能与宏定义和全局变量重名
   //d1 = MON;
   day d1;
   d1 = day::TUE;

   if (d1 == day::TUE)
   {
       cout << "TUE" << endl;
    }




    return 0;
}

