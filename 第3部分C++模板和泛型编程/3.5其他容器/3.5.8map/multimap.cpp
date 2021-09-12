#include <iostream>
#include <string>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
    // (1) 默认构造函数
    multimap<string, int> map1;
    map1.insert({"a", 1});
    map1.insert({"b", 2});
    map1.insert({"c", 3});
    map1.insert({"d", 4});
    map1.insert({"c", 5});
    map1.insert({"c", 5});
    cout << map1.size() << endl;
}