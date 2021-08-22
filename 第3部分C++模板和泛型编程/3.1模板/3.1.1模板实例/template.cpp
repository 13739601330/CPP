#include <iostream>

using namespace std;

//使用模板类写一个add函数
template <typename T>

T add(T a, T b)
{
    return a + b;
}
//使用模板类写一个swap函数
template <typename T>
void myswap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
void myswap2(float a, float b)
{
    float temp;
    temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    //int x = 9, y=10, res = 0;
    float x = 0.1, y = 0.2, res = 0;
    res = add(x, y);

    std::cout << "x + y = " << res << std::endl;
    std::cout << "交换前：x = " << x << ", y = " << y << std::endl;
    myswap(x,y);
    std::cout << "交换后：x = " << x << ", y = " << y << std::endl;
    return 0;
}
