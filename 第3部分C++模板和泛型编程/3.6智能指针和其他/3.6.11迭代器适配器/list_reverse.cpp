#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> values{1,2,3,4,5};
    //找到遍历的开头位置和结尾位置
    std::list<int>::iterator begin = --values.end();
    std::list<int>::iterator end = --values.begin();
    //开始遍历
    while (begin != end)
    {
        cout << *begin << " ";
        --begin;
    }

    return 0;
}
