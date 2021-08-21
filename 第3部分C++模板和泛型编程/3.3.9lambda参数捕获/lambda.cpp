#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    auto func = [a](int i)->int{std::cout << a << std::endl;};
    func(4);
    return 0;
}
