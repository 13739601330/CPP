#include "person.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    person p1;
    p1.age = 15;
    cout << p1.age << endl;  
    p1.print_height();

    return 0;
}
