#include <iostream>
#include <string> 
using namespace std;


template<typename T>
bool GreaterThan(T a, T b)
{
    cout << "GreaterThan(T a, T b)" << endl;
    if (a>b)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
//对GreaterThan函数在string类型下的特化
template <>
bool GreaterThan(string a, string b)
{
    cout << "a.size > b.size" << endl;
    if (a.size() > b.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool GreaterThan(string a, string b)
{
    cout << "普通函数" << endl;
    if (a.size() > b.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(int argc, char const *argv[])
{
    //cout << boolalpha << GreaterThan(6,5) << endl;
    string a = "linux";
    string b = "harmoyOS";
    //普通函数优先级最高，然后是特化版本，最后才是模板函数
    cout << boolalpha << GreaterThan(a,b) << endl;
    return 0;
}
