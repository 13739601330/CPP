#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, const char** argv) 
{
    multiset<string> a;
    a.insert("pig");
    a.insert("pig");
    a.insert("cat");

    cout << a.size() << endl;

    //set的遍历
    for(auto s:a)
    {
        cout << s << " ";
    }
    cout << endl;

    for(auto it = a.begin(); it != a.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;

    for_each(a.cbegin(), a.cend(), [](const string &s){std::cout << s << std::endl;});
    return 0;
}
