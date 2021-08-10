#include "person.hpp"
#include <iostream>
using namespace std;

void print(void)
{   
    person p1(160, 18, 20);
    std::cout << p1.height << std::endl;
    std::cout << p1.age << std::endl;
    std::cout << p1.length << std::endl;
}
int main(int argc, char const *argv[])
{
    //print();

    animal a1;
    person p2(170, 23, 21);
    a1.eat(p2);
    return 0;
}
