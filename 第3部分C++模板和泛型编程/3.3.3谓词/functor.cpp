#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

//用函数实现
bool IsGreater(int a)
{
    return (a>0);
}
//用函数对象实现

class Is_Greater
{
private:
    /* data */
public:
    //只需要写一个 () 的运算符重载函数
    bool operator() (int a)
    {
        return (a>0);
    }
};




int main(int argc, char const *argv[])
{
    bool b = IsGreater(0);
    Is_Greater isGreater;
    b = isGreater(5);

    cout << boolalpha << b << endl;
    return 0;
}
