#include "mystring.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    mystring s1("shuai");
    mystring s2("asssdadasss");
    s1.print();
    s2.print();
    s1 = s2;
    s1.print();
    s2.print();
    return 0;
}
