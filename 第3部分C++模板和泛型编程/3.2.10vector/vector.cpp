#include <iostream>
#include <vector>

using namespace std;

template <typename T>
std::ostream &operator<<(std::ostream &s, const std::vector<T> &v)
{
    s.put('[');
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto &e : v)
    {
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}

void print_vec(const std::vector<int> &vec)
{
    for (auto x : vec)
    {
        std::cout << ' ' << x;
    }
    std::cout << '\n';
}

int main(int argc, char const *argv[])
{
    //1.定义和初始化
    vector<int> vec;

    vector<int> vec1 = {1,2,3,4};
    std::cout << "vec1: " << vec1 << endl;

    vector<int> vec2 {1, 2, 3, 4};
    std::cout << "vec2: " << vec2 << endl;

    vector<int> vec3={vec1.begin(), vec1.end()};
    std::cout << "vec3: " << vec3 << endl;

    vector<int> vec4(5,1);
    std::cout << "vec4: " << vec4 << endl;

    vec4.assign(4, 2);
    std::cout << "vec4: " << vec4 << endl;

    vec4.assign({1,2,3,4,5,6});
    vec4.push_back(9);
    std::cout << "vec4: " << vec4 << endl;

    //2.元素访问
    std::cout << "vec1[1] = " << vec1[1] << std::endl;
    std::cout << "vec1.at(1) = " << vec1.at(1) << std::endl;
    std::cout << "vec1.front() = " << vec1.front() << std::endl;
    std::cout << "vec1.back() = " << vec1.back() << std::endl;
    std::cout << "* vec1.data() = " << *(vec1.data()) << std::endl;

    //3.迭代器
    // for (auto c_iter = vec1.cbegin(); c_iter != vec1.cend(); c_iter++) //只读，不可写
    // {
    //     //*c_iter = 1;
    //     cout << "*c_iter  = " << *c_iter << endl;
    // }

    //4.容量
    // std::cout << "vec1.empty()= " << vec1.empty() << std::endl;
    // std::cout << "vec.empty()= " << vec.empty() << std::endl;
    // std::cout << "vec1.size() = " << vec1.size() << std::endl;
    // std::cout << "vec1.max_size() = " << vec1.max_size() << std::endl;
    // //std::cout << "vec1.reserve() = " << vec1.reserve(10) << std::endl;
    // vec1.push_back(4);
    // std::cout << "vec1.capacity() = " << vec1.capacity() << std::endl;

    //5.修改器
    vec1.clear();
    std::cout << "vec1 = " << vec1 << std::endl;
    auto c_iter = vec1.cbegin();
    c_iter = vec1.insert(c_iter, 5);
    std::cout << "vec1 = " << vec1 << std::endl;
    
    c_iter = vec1.insert(c_iter, 5, 10);
    std::cout << "vec1 = " << vec1 << std::endl;

    c_iter = vec1.insert(c_iter+2, vec2.begin(), vec2.end());
    std::cout << "vec1 = " << vec1 << std::endl;

    int arr[] = {501, 502, 503};
    vec1.insert(vec1.begin(), arr, arr + 3);
    std::cout << "vec1 = " << vec1 << std::endl;
    
    return 0;
}
