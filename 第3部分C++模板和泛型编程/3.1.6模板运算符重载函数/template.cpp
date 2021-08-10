#include <iostream>
#include <string>
using namespace std;

//在定义类时，使用模板
template <typename T1, typename T2>
class Person
{
private:
    T1 age;
    T2 name;

public:
    Person();
    Person(T1 age, T2 name) : age(age), name(name){};
    ~Person();
    void print(void);

    //运算符重载函数
    Person<T1, T2> operator+(Person<T1, T2> &other);
};

template <typename T1, typename T2>
Person<T1, T2>::Person()
{
}

template <typename T1, typename T2>
Person<T1, T2>::~Person()
{
}
template <typename T1, typename T2>
Person<T1, T2> Person<T1, T2>::operator+(Person<T1, T2> &other)
{
    Person<T1, T2> temp;
    temp.age = this->age + other.age;
    return temp;
}

template <typename T1, typename T2>
void Person<T1, T2>::print(void)
{
    cout << this->age << endl;
}
int main(int argc, char const *argv[])
{
    Person<string, string> p1("shuai", "晨帅");
    Person<string, string> p2("zha", "晨帅");
    Person<string, string> p3("guo", "晨帅");
    p3 = p1 + p2;

    p3.print();
    return 0;
}
