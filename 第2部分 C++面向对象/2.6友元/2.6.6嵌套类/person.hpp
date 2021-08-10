#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>
using namespace std;


class person
{
private:
    int height;
public :

    int age;
    person();
    person(int myheight, int myage, int mylength);
    ~person();

    
protected:
    int length;
};




#endif // !__PERSON_HPP__