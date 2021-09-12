#include <iostream>
#include <memory>
using namespace std;

class People
{
private:
    string name;
public:
    People(){};
    People(string myname)
    {
        this->name = myname;
        std::cout << "构造函数" << std::endl;
    }
    ~People() { std::cout << "析构函数" << std::endl; };

    void print(void)
    {
        cout << name << endl;
    }
};




int main(int argc, char const *argv[])
{
    // People p1("shuai");
    // p1.print();

    // People *p2 = new People("帅");
    // p2 -> print();
    // delete p2;
/*
    auto_ptr<People> p3(new People("p3"));
    p3->print();
    (*p3).print();
    People *p4 = p3.get();//p3没变，还可以用，“观察器”
    p4->print();
*/
    auto_ptr<People> p5(new People("p5"));
    p5.reset(new People("p5_reset"));
    p5->print();

    auto_ptr<People> p6(new People("p6"));
    People *p7 = p6.release(); //p6不能再用了 
    p7->print();
    delete p7;
    //这里需要手动delete

    return 0;
}
