#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

//对比两个字符串，长度长的认为“大”

class Greater
{
private:
    
public:
    bool operator() (const string& s1, const string & s2)
    {
        return (s1.size() < s2.size());
    }
};




int main(int argc, char const *argv[])
{
    array<string,3> arr = {"CSGO","LOL","CF"};
    sort(arr.begin(), arr.end(), greater<string>());
    sort(arr.begin(), arr.end(), Greater());
    for(auto ai:arr)
    {
        std::cout << "arr:" << ai << std::endl;
    }
    return 0;
}
