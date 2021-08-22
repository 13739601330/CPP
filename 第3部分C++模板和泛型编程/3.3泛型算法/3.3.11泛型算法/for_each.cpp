#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

//下列代码用 lambda 函数自增 vector 的所有元素，然后用函数对象中的重载 operator() 计算其和。
//注意推荐用更适合的算法 std::accumulate 计算和。

struct Sum
{
    static int sum ;
    void operator()(int n){sum+=n;};
    //int sum{0};
};
int Sum::sum = 0;

int main(int argc, char const *argv[])
{
    vector<int> vec = {1,2,3,8,45,69};
    for_each(vec.cbegin(), vec.cend(), [](const int &n){cout << n << " ";});
    for_each(vec.begin(), vec.end(), []( int &n){n++;});
    for_each(vec.cbegin(), vec.cend(), [](const int &n){cout << n << " ";});
    for_each(vec.begin(), vec.end(), Sum());
    cout << Sum::sum << endl;
    return 0;
}
