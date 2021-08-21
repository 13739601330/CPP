#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    //array<int,5> arr= {1,3,5,0,-4};
    vector<int> arr = {1,3,5,0,-4};
    //list<int> arr = {1, 3, 5, 0, -4}; 
    sort(arr.begin(), arr.end(), greater<int>());
    for(auto ai:arr)
    {
        std::cout << "arr:" << ai << std::endl;
    }
    return 0;
}
