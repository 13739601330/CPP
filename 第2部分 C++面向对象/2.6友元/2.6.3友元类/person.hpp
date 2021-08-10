#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>
using namespace std;


class person;   //类的前置声明，即使前置声明后也不能使用类的成员，也不能定义对象，但是可以定义对象的指针和引用

class animal
{
private:
    /* data */
public:
    animal(/* args */);
    ~animal();

    void eat(person &pn);
};

class person
{
private:
    int height;

    friend class animal;//animal成为了person 的友元类，animal中的成员方法直接全部变成了person类的友元函数
public :

    int age;
    person();
    person(int myheight, int myage, int mylength);
    ~person();

    
protected:
    int length;
};




#endif // !__PERSON_HPP__