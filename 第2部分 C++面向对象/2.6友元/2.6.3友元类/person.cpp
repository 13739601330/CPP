#include "person.hpp"

person::person(/* args */)
{
}
person::person(int myheight, int myage, int mylength)
{
    height = myheight;
    age = myage;
    length = mylength;
}
person::~person()
{
}
/////////////////////////////////////////////////////
animal::animal(/* args */)
{
}

animal::~animal()
{
}

void animal::eat(person &pn)
{
    std::cout << "animal eat a person" << std::endl;
    std::cout << pn.height << std::endl;
    std::cout << pn.age << std::endl;
    std::cout << pn.length << std::endl;
}