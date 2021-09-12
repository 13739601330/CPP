#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(int argc, const char** argv) 
{
    unordered_map<int,string> map;
    for (size_t i = 0; i < 100; i++)
    {
        map.insert(make_pair(i, "map"));
        cout << "map.size()" << map.size() << endl;
        cout << "桶的个数" << map.bucket_count() << endl;
    }

    cout << "map.size()" << map.size() << endl;

    for(auto it = map.begin(); it != map.end(); ++it)
    {
        std::cout << "{" << it->first << "," << it->second << "}" << std::endl;

    }
    
    cout << "桶的个数" <<  map.bucket_count() << endl;
    return 0;
}