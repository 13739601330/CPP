#include "person.hpp"


int person::height = 150;
person::person(/* args */)
{
}

person::~person()
{
}
void person::print(void)
{
    cout << "height = " << person::height << endl;
}
void person::print_height(void)
{
    cout << " print_height = " << person::height << endl;
    cout << " print_height = " << height << endl;
    cout << " print_height = " << this->height << endl;
}