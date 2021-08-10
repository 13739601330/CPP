#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>
using namespace std;

class person
{
private:
    
public:

    int age;
    static int height; //类变量
    person(/* args */);
    ~person();

    static void print(void);
    void print_height(void);
};




#endif // !__PERSON_HPP__