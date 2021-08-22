#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
void GreaterThan(T1 a, T2 b)
{
    cout << "GreaterThan(T1 a, T2 b)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
//对GreaterThan函数在string类型下的特化
//全特化
template <>
void GreaterThan(string a, string b)
{
    cout << "GreaterThan(string a, string b)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(int argc, char const *argv[])
{
    //cout << boolalpha << GreaterThan(6,5) << endl;
    string a = "linux";
    string b = "harmoyOS";
    int c = 0;
    //普通函数优先级最高，然后是特化版本，最后才是模板函数
    GreaterThan(a, c);
    return 0;
}
