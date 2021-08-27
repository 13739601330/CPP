#include <iostream>
#include <cstring>
#include <string>

using namespace std;

/*******************is_pod的一种可能实现**********************/


template <typename T>
struct my_is_pod
{
    static bool value ;
};

template <typename T>
bool my_is_pod<T>::value = false;

template <>
struct my_is_pod<int>
{
    static bool value;
};

bool my_is_pod<int>::value = true;

template <>
struct my_is_pod<double>
{
    static bool value;
};

bool my_is_pod<double>::value = true;

/*****************************************/
template <typename T>
void mycopy(T *dest, const T *src, int cnt)
{
    if (my_is_pod<T>::value )
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

int main(int argc, char const *argv[])
{

    double a[3] = {1, 1.8, 5};
    double b[3];
    mycopy<double>(b, a, 3);
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

    
    return 0;
}
