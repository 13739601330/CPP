#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Person;
template <typename T1, typename T2>
Person<T1, T2> operator+(Person<T1, T2> &a, Person<T1, T2> &b);
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

    //+运算符重载函数
    // Person<T1, T2> operator+(Person<T1, T2> &other);
    //友元运算符重载
    //1.直接写在类内
    // friend Person<T1, T2> operator+(Person<T1, T2> &a,Person<T1, T2> &b)
    // {
    //     Person<T1, T2> temp;
    //     temp.age = a.age + b.age;
    //     temp.name = a.name + b.name;
    //     return temp;
    // }
    //2.定义在类外
    friend Person<T1, T2> operator+<>(Person<T1, T2> &a, Person<T1, T2> &b);
    //3.定义在类外，直接在友元函数前加模板定义，名称不同于类前的模板定义
    //+=运算符重载函数
    template <typename U1, typename U2>
    friend Person<U1, U2>& operator+=(Person<U1, U2> &a, Person<U1, U2> &b);
};

template <typename T1, typename T2>
Person<T1, T2>::Person()
{
}

template <typename T1, typename T2>
Person<T1, T2>::~Person()
{
}
// template <typename T1, typename T2>
// Person<T1, T2> Person<T1, T2>::operator+(Person<T1, T2> &other)
// {
//     Person<T1, T2> temp;
//     temp.age = this->age + other.age;
//     return temp;
// }
template <typename T1, typename T2>
Person<T1, T2> operator+(Person<T1, T2> &a, Person<T1, T2> &b)
{
    Person<T1, T2> temp;
    temp.age = a.age + b.age;
    temp.name = a.name + b.name;
    return temp;
}
template <typename T1, typename T2>
Person<T1, T2> &operator+=(Person<T1, T2> &a, Person<T1, T2> &b)
{
    a.age = a.age + b.age;
    a.name = a.name + b.name;
    return a;
}
template <typename T1, typename T2>
void Person<T1, T2>::print(void)
{
    cout << this->age << endl;
    cout << this->name << endl;
}
int main(int argc, char const *argv[])
{
    Person<string, string> p1("shuai", "晨帅");
    Person<string, string> p2("zha", "晨帅");
    Person<string, string> p3("guo", "晨帅");
    Person<int, string> p4(4, "晨帅");
    Person<int, string> p5(5, "晨帅");
    Person<int, string> p6(6, "晨帅");
    p6= p4 + p5;

    p1+=p2;
    p1.print();
    p6.print();
    return 0;
}
