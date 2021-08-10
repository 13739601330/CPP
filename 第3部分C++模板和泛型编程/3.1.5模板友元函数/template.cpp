#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Person ;
template <typename T1, typename T2>
void print3(const Person<T1, T2> &pn);

//在定义类时，使用模板
template <typename T1, typename T2>
class Person
{
private:
    T1 age;
    T2 name;

public:
    Person();
    Person(T1 age,T2 name):age(age),name(name){};
    ~Person();
    //1.在友元函数中直接确定抽象类型
    friend void print(const Person<int, string> &pn);
    //2.直接将友元函数定义在类内部
    friend void print2(const Person<T1, T2> &pn)
    {
        std::cout << "age = " << pn.age << std::endl;
        std::cout << "name = " << pn.name << std::endl;
    }
    //3.在友元函数中直接使用模板类型,注意在声明时函数名后面要加<>,但定义时不能加。
    //此外，还要在类之前声明一遍，一般由于友元函数的参数问题，还需要再声明一次类
    friend void print3<T1, T2>(const Person<T1, T2> &pn);
    //4.在声明友元函数时，在前面加上模板定义，但模板名字要与类中的不同
    template <typename U1, typename U2>
    friend void print4<T1, T2>(const Person<T1, T2> &pn);
};

template <typename T1, typename T2>
Person<T1,T2>::Person()
{
}

template <typename T1, typename T2>
Person<T1, T2>::~Person()
{
}

void print(const Person<int, string> &pn)
{
    std::cout << "age = " <<pn.age << std::endl;
    std::cout << "name = " << pn.name << std::endl;
}

template <typename T1, typename T2>
void print3(const Person<T1, T2> &pn)
{
    std::cout << "age = " << pn.age << std::endl;
    std::cout << "name = " << pn.name << std::endl;
}
template <typename T1, typename T2>
void print4(const Person<T1, T2> &pn)
{
    std::cout << "age = " << pn.age << std::endl;
    std::cout << "name = " << pn.name << std::endl;
}
int main(int argc, char const *argv[])
{
    Person<int, string> p1(5,"晨帅");
    print4(p1);

    return 0;
}
