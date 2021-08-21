#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {10,2};

    struct lambda
    {
        bool operator() (int i)
        {
            return i % 2 == 0;
        }
    };
    
    //if(all_of(v.cbegin(), v.cend(), [](int i){return i%2 == 0;}))
    if(all_of(v.cbegin(), v.cend(), lambda()))
    {
        std::cout << "所有数字都是偶数" << std::endl;
    }
    else
    {
        std::cout << "所有数字不都是偶数" << std::endl;
    }
    return 0;
}
