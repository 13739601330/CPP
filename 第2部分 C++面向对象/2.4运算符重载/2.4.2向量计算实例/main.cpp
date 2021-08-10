#include <iostream>

using namespace std;

class vector
{
private:
    /* data */
public:
    double x;
    double y;
    double z;

    vector(/* args */);
    vector(double x0, double y0, double z0);
    ~vector();

    void print(void);
    vector operator-(const vector &other);
    void operator-=( vector &other);
    vector operator=(const vector &other);
};

vector::vector(/* args */)
{
    x = 0;
    y = 0;
    z = 0;
}
vector::vector(double x0, double y0, double z0)
{
    x = x0;
    y = y0;
    z = z0;
}
vector::~vector()
{
}

void vector::print(void)
{
    cout << "(" << this->x << "," << this->y << "," << this->z << ")" << endl;
}
//运算符重载，实现向量的减法
vector vector::operator-(const vector &other)
{
    vector temp;

    temp.x = this->x - other.x;
    temp.y = this->y - other.y;
    temp.z = this->z - other.z;

    return temp;
}

vector vector::operator=(const vector &other)
{

if (this != &other)//避免自赋值
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
}
    return *this;
}
//运算符重载，实现向量的减等于
void vector::operator-=(vector &other)
{
 
/*
    this->x = this->x - other.x;
    this->y = this->y - other.y;
    this->z = this->z - other.z;
*/
    *this = *this - other;
    return ;
}

int main(int argc, char const *argv[])
{
    vector v1(1, 5, 6);
    vector v2(8, 8.6, 6.2);
    vector v3 = v1 - v1;
    v1 -= v2;
    v1.print();
    v2.print();
    v3.print();

    return 0;
}
