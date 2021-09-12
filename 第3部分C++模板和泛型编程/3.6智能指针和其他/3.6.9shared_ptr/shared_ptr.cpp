#include <iostream>
#include <string>
#include <memory>
using namespace std;

class People
{
private:
public:
    string name;

    People(){};
    People(string name)
    {
        this->name = name;
        std::cout << "构造函数" << std::endl;
    }
    ~People() { std::cout << "析构函数" << std::endl; };
    void print() { std::cout << this->name << std::endl; }
};
class D
{
public:
    void operator()(People *p) const
    {
        std::cout << "People的删除器" << std::endl;
        delete p;
    }
};

int main(int argc, char const *argv[])
{

    //shared_ptr 的引用计数
    shared_ptr<People> sp6 = make_shared<People>("sp6");
    sp6->print();
    std::cout << "sp6.use_count() :" << sp6.use_count() << std::endl;
    std::cout << "sp6.unique() : " << boolalpha << sp6.unique() << std::endl;
    if (sp6)
    {
        cout << "sp6有指向" << std::endl;
    }
    else
    {
        cout << "sp6没有指向" << std::endl;
    }
    sp6.reset(new People("sp new"));
    /*
    shared_ptr<People> sp5 = make_shared<People>("sp5");
    sp5->print();
    */
    /*
    shared_ptr<People> sp1(new People("shuai"));
    shared_ptr<People> sp2(sp1);
    shared_ptr<People> sp3 = sp1;
    shared_ptr<People> sp4(new People("sp4"), D());
    //sp1->print();
    cout << sp1.use_count() << endl;
    sp4->print();
    */

    return 0;
}
