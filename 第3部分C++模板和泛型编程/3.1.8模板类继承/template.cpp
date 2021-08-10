#include <iostream>
#include <string>
using namespace std;

//模板类的继承
template <typename T1>
class Person
{
private:
public:
    T1 x;
    Person();
    Person(T1 x) : x(x){};
    ~Person();
    void print(void);
};

template <typename T1>
Person<T1>::Person()
{
}

template <typename T1>
Person<T1>::~Person()
{
}

template <typename T1>
void Person<T1>::print(void)
{
    cout << this->x << endl;
}



template <typename T2>
class Man : public Person<T2>
{
private:
    
public:
    T2 y;
    Man(/* args */);
    Man(T2 x,T2 y):Person<T2>(x),y(y){};
    ~Man();
    void print(void);
};
template <typename T2>
Man<T2>::Man(/* args */)
{
}


template <typename T2>
Man<T2>::~Man()
{
}
template <typename T2>
void Man<T2>::print(void)
{
    cout << this->x << endl;
    cout << this->y << endl;
}

int main(int argc, char const *argv[])
{
    Man<int> m1(45,85);
    m1.print();
    return 0;
}
