#include <iostream>
#include <string>
using namespace std;

//模板类的继承
template <typename U1, typename U2>
class Person
{
private:
public:
    U1 x1;
    U2 x2;
    Person(){};
    Person(U1 a, U2 b) : x1(a), x2(b){};
    ~Person();
    void print(void);
};

template <typename U1, typename U2>
Person<U1, U2>::~Person()
{
}

template <typename U1, typename U2>
void Person<U1, U2>::print(void)
{
    cout << this->x1 << endl;
}

//注意：
/*
子类Man中定义了两个类型，在使用其生成对象时，指定了T1=int,T2=double, 
所以继承的Person<T1, T2>对应为了Person<int, double>,所以在Person<U1, U2>
中U1 = int,U2 = double;

总之，就是在继承时写的Person<T1, T2>实际上是对Person<U1, U2>的一次对应，可以将
U1 = T1，U2 = T2,也可以U1 = T2,U2 = T1,甚至也可以手动指定U1,U2的具体类型
*/
template <typename T1, typename T2>
class Man : public Person<T1, T2>
{
private:
public:
    T1 y1;
    T2 y2;
    Man(){};
    //初始化顺序按照x1,x2,y1,y2
    Man(T1 a1, T2 a2, T1 b1, T2 b2) : Person<T1, T2>(a1,a2), y1(b1),y2(b2){};
    ~Man();
    void print(void);
};
template <typename T1, typename T2>
Man<T1, T2>::~Man() {}

template <typename T1, typename T2>
void Man<T1, T2>::print(void)
{
    cout << this->x1 << endl;
    cout << this->x2 << endl;
    cout << this->y1 << endl;
    cout << this->y2 << endl;
}

int main(int argc, char const *argv[])
{
    Man<int,double> m1(45, 85.5,43,5.8);
    m1.print();
    return 0;
}
