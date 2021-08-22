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
template<>
class People<int, double>
{
private:
public:
    People(){};
    ~People(){};

    void print(int a, double b)
    {
        std::cout << "类模板全特化 \n a,b = " << a << "," << b << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    int a = 5;
    double d = 6.5;
    People<int,double> p1;
    p1.print(a,d);

    return 0;
}
