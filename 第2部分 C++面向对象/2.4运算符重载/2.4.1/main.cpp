#include <iostream>

using namespace std;

class person
{
private:
    /* data */
public:
    int age;
    person(/* args */);
    ~person();
};

person::person(/* args */)
{
}

person::~person()
{
}


int main(int argc, char const *argv[])
{
    person p1;
    person p2;
    person p3;

    //p3 = p1 + p2;

    return 0;
}
