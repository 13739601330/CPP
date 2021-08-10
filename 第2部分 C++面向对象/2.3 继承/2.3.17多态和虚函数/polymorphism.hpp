#ifndef __POLYMORPHISM_HPP__
#define __POLYMORPHISM_HPP__

#include <iostream>
using namespace std;

class animal
{
private:
    /* data */
public:
    animal(/* args */);
    virtual ~animal();
    virtual void speak(void);
    void print(void){};
};

class dog:private animal
{
private:
    /* data */
public:
    dog(/* args */);
    ~dog();
    void speak(void);
};

class cat:public animal
{
private:
    /* data */
public:
    cat(/* args */);
    ~cat();
    void speak(void);
};




#endif // !__POLYMORPHISM_HPP__