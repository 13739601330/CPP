#include <iostream>
#include <string>
#include <vector>
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


//类模板偏特化1
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

//类模板偏特化2
template <typename T1, typename T2>
class People<T1 *, T2 >
{

private:
public:
    People(){};
    ~People(){};

    void print(T1 a, T2 b)
    {
        std::cout << "类模板偏特化2 \n a,b = " << a << "," << b << std::endl;
    }
};
//将T偏特化为vector<T>
//类模板偏特化2
template <typename T1, typename T2>
class People<vector<T1>, T2>
{

private:
public:
    People(){};
    ~People(){};

    void print(T1 a, T2 b)
    {
        std::cout << "类模板偏特化3 \n a,b = " << a << "," << b << std::endl;
    }
};
int main(int argc, char const *argv[])
{
    int a = 5, b = 7;
    int *p = &a;
    double d = 6.5;
    People<int,int> p1;
    p1.print(a,a);

    People<int *,int> p2;
    p2.print(a,b);

    People<vector<int> , int> p3;
    p3.print(a, b);
    return 0;
}
