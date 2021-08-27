#include <iostream>
#include <cstring>
#include <string>




struct MyStruct
{
    typedef double Myint;
    //可以使用MyStruct::Myint
};
/*******************is_pod的可能实现**********************/
struct TrueType
{
    bool GetType(void)
    {
        return true;
    }
};
struct FalseType
{
    bool GetType(void)
    {
        return false;
    }
};
template <typename T>
struct my_is_pod
{
    typedef FalseType value_type;
};


template <>
struct my_is_pod<int>
{
    typedef TrueType value_type;   //重命名的子类型，用my_is_pod::value_type访问
};

int main(int argc, char const *argv[])
{
    std::cout << std::boolalpha << my_is_pod<int>::value_type().GetType() << std::endl;
    return 0;
}
