#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec;
    for (int i = 0; i < 14; i++)
    {
        vec.push_back(i);
        cout << i << " ";
    }

    // auto func = less<int>();
    // cout << boolalpha << func(2, 2) << less<int>()(1,2)<<endl;

    int res1 = count_if(vec.cbegin(), vec.cend(), bind1st(less<int>(), 10));
    cout << "res1 = " << res1 << endl;
    
    int res2 = count_if(vec.cbegin(), vec.cend(), bind2nd(less<int>(), 10));
    cout << "res2 = " << res2 << endl;


    int res3 = count_if(vec.cbegin(), vec.cend(), bind(less<int>(), placeholders::_1, 10));
    cout << "res3 = " << res3 << endl;

    int res4 = count_if(vec.cbegin(), vec.cend(), bind(less<int>(), 10, placeholders::_1));
    cout << "res4 = " << res4 << endl;

    return 0;
}
