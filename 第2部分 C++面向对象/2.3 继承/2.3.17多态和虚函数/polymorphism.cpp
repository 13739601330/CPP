#include "polymorphism.hpp"


animal::animal(/* args */)
{
}

animal::~animal()
{
    cout << "animal::~animal" << endl;
}

void animal::speak(void)
{

    cout << "animal speak" << endl;
}
dog::dog(/* args */)
{
}

dog::~dog() //会调用父类的析构函数
{
    cout << "dog::~dog" << endl;
}
void dog::speak(void)
{

    cout << "wangwangwang" << endl;
}

cat::cat(/* args */)
{
}

cat::~cat()
{
}
void cat::speak(void)
{

    cout << "miaomaiomaio" << endl;
}