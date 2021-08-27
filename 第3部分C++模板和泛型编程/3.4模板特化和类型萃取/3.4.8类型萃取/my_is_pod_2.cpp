#include <iostream>
#include <cstring>
#include <string>

using namespace std;


struct MyStruct
{
    typedef std::int Myint;
    //可以使用MyStruct::Myint
};
/*******************is_pod的可能实现**********************/

/*
template <typename T>
struct my_is_pod
{
    bool value ;
    my_is_pod()
    {
        value = false;
    };
};


template <>
struct my_is_pod<int>
{
    bool value;
    my_is_pod()
    {
        value = true;
    };
};

*/
/*****************************************/

template <typename T>
struct my_is_pod
{
public:    
    my_is_pod()
    {
        value = false;
    };
    bool GetType(void)
    {
        return value;
    }
private:
    bool value ;
};


template <>
struct my_is_pod<int>
{
    my_is_pod()
    {
        value = true;
    };
    bool GetType(void)
    {
        return value;
    }
private:
    bool value ;
};
/*
template <typename T>
void mycopy(T *dest, const T *src, int cnt)
{
    if (my_is_pod<T>().value )
    {
        memcpy(dest, src, cnt*sizeof(T));
    }
    else
    {
        for (size_t i = 0; i < cnt; i++)
        {
            dest[i] = src[i];
        }
        
    }
    
    
}
*/
int main(int argc, char const *argv[])
{

    //std::cout << boolalpha << my_is_pod<int>().value << std::endl;
    std::cout << boolalpha << my_is_pod<int>().GetType() << std::endl;
    /*
    int a[3] = {1, 1, 5};
    int b[3];
    mycopy<int>(b, a, 3);
    for (auto i : b)
    {
        cout << i << endl;
    }


    string s1[3] = {"iphone", "oppo", "realme"};
    string s2[3];
    mycopy<string>(s2, s1, 3);
    for (auto i : s2)
    {
        cout << i << endl;
    }

 */  
    return 0;
}
