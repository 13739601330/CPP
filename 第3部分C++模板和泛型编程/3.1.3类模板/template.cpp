#include <iostream>
#include <string>
using namespace std;

//在定义类时，使用模板
template <typename T> class Person
{
private:
    int age;

public:
    Person();
    Person(int age);
    ~Person();

    void print(T x);
};

template <typename T>
Person<T>::Person()
{
}
template <typename T>
Person<T>::Person(int myage)
{
    age = myage;
}
template <typename T>
Person<T>::~Person()
{
}
template <typename T>
void Person<T>::print(T x)
{
    cout << "x = " << x << ",age = " << age << endl;
}
int main(int argc, char const *argv[])
{
    Person<string> p1(45);

    p1.print("类模板");
    return 0;
}

/*
class Person
{
private:
    int age;

public:
    Person();
    Person(int age);
    ~Person();

    void print(int x);
};

Person::Person()
{
}
Person::Person(int myage)
{
    age = myage;
}
Person::~Person()
{
}
void Person::print(int x)
{
    cout << "x = " << x << ",age = " << age << endl;
}
int main(int argc, char const *argv[])
{
    Person p1(45);

    p1.print(1);
    return 0;
}
*/