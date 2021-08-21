#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;
using namespace std::placeholders;

int Testfunc(int a, char c, double d)
{
    cout << a <<" ";
    cout << c <<" ";
    cout << d <<" ";
    cout << endl;
}
int main(int argc, char const *argv[])
{
    auto func1 = bind(Testfunc,_1,_2,_3);
    auto func2 = bind(Testfunc,15,_2,_1);
    auto func3 = bind(Testfunc,_2,'a',_1);

    func1(1,'a',4.5);
    func2(4.5,'a');
    func3(4.5, 5);

  

    return 0;
}
