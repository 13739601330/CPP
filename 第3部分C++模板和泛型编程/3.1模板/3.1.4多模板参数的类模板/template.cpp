#include <iostream>
#include <string>
using namespace std;

//在定义类时，使用模板
template <typename T1, typename T2>
class Person
{
private:
    int age;

public:
    Person();
    Person(int age);
    ~Person();

    void print(T1 x,T2 y);
};

template <typename T1, typename T2>
Person<T1,T2>::Person()
{
}
template <typename T1, typename T2>
Person<T1, T2>::Person(int myage)
{
    age = myage;
}
template <typename T1, typename T2>
Person<T1, T2>::~Person()
{
}
template <typename T1, typename T2>
void Person<T1, T2>::print(T1 x,T2 y)
{
    cout << "x = " << x << ",age = " << age << endl;
    cout << "y = " << y << ",age = " << age << endl;
}
int main(int argc, char const *argv[])
{
    Person<int, string> p1(5);
    p1.print(45,"多模板类型的类模板");

    return 0;
}
