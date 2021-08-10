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
    // vector operator=(const vector &other);
    // vector& operator=(const vector &other);
    vector *operator=(const vector *pother);
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
// vector vector::operator=(const vector &other)
// {

//     if (this != &other)//避免自赋值
//     {
//         this->x = other.x;
//         this->y = other.y;
//         this->z = other.z;
//     }
//     return *this;
// }
// vector &vector::operator=(const vector &other)
// {

//     if (this != &other)//避免自赋值
//     {
//         this->x = other.x;
//         this->y = other.y;
//         this->z = other.z;
//     }
//     return *this;
// }
vector *vector::operator=(const vector *pother)
{
    if (this != pother) //避免自赋值
    {
        this->x = pother->x;
        this->y = pother->y;
        this->z = pother->z;
    }
    return this;
}
int main(int argc, char const *argv[])
{
    vector v1(1, 5, 6);
    vector v2(8, 8.6, 6.2);
    vector v3;
    v2 = &v1;
    v1.print();
    v2.print();
    v3.print();


    return 0;
}
