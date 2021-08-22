#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class People
{
private:
    
public:
    People(){};
    ~People(){};

    void print(T1 a, T2 b)
    {
        std::cout << "a,b = " << a << ","<< b << std::endl;
    }
};


//类模板全特化
template <typename T1>
class People<T1, double>
{
private:
public:
    People(){};
    ~People(){};

    void print(T1 a, double b)
    {
        std::cout << "类模板偏特化1 \n a,b = " << a << "," << b << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    int a = 5;
    double d = 6.5;
    People<int,int> p1;
    p1.print(a,a);

    People<int,double> p2;
    p2.print(a,d);
    return 0;
}
