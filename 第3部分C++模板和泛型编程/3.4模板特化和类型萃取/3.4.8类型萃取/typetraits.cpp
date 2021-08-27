#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template<typename T>
void mycopy(T *dest, const T *src, int cnt)
{
    memcpy(dest, src, cnt*sizeof(T));
}

int main(int argc, char const *argv[])
{

    int a[3] = {1, 1, 5};
    int b[3];
    mycopy<int>(b, a, 3);
    for (auto i : b)
    {
        cout << i << endl;
    }

/*报错，string 不同于 传统的C语言类型,所以要区别对待
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
