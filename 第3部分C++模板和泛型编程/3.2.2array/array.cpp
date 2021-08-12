#include <iostream>
#include <array>
#include <tuple>
#include <type_traits>
using namespace std;


//这个函数通过tuple_value在编译时确定了传入array的元素数量
//效率更高，通用性好
// template <class T>
// void test(T t)
// {
//     int a[std::tuple_size<T>::value]; // 能用于编译时
//     std::cout << std::tuple_size<T>::value << '\n';
// }
int main(int argc, char const *argv[])
{
    //1.定义和初始化
    //只是定义，没有初始化，值是随机的
    // array<int, 5> b;
    //聚合初始化，用大括号
    // array<int, 5> c{1, 1, 2, 3, 4};
    // array<int, 0> a2;
    // array<int, 6> a = {0, 1, 2, 3, 4, 5};
    // array<int, 6> b = {10, 9, 8, 7, 6, 5};
    /*C++20
    int x[3] = {1,2,3};
    array<int,3> x_array = to_array<int,3>(x);
    for (int i = 0; i < x_array.size(); i++)
    {
        cout << "x_array" << i << "=" << x_array.at(i) << endl;
    }
    */

    //2.访问元素
    // cout << a2.at(0) << endl;
    // cout << a.at(5) << endl; //会进行越界检查
    // cout << a.front() << endl;
    // cout << a.back() << endl;
    // int *const p = a.data();
    // cout << "*p = " << *p << endl;
    // cout << "*(p+1) = " << *(p + 1) << endl;

    //3.数组容量
    // cout << a.empty() << endl;
    // cout << a2.empty() << endl;
    // cout << "a.size() = " << a.size() << endl;
    // cout << "a.max_size() = " << a.max_size() << endl;

    //4.数组操作

    // a.fill(4);

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << "a" << i << "=" << a.at(i) << endl;
    // }

    // a.swap(b);
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << "a" << i << "=" << a.at(i) << endl;
    // }
    // for (int i = 0; i < b.size(); i++)
    // {
    //     cout << "b" << i << "=" << b.at(i) << endl;
    // }

    //5.运算符重载函数
    // cout << "a == b?  " << (a == b) << endl;
    // array<int, 6> c = a;
    // cout << "a == c?  " << (a == c) << endl;

    //  < ：从第一个开始比，小于就返回true,大于就返回false,相等就比较下一个，''' 全部相等就返回false
    //  <= ：从第一个开始比，小于就返回true,大于就返回false,相等就比较下一个，''' 全部相等就返回true

    // array<int, 3> c = {3, 4, 5};
    // array<int, 3> d = {1, 2, 3};
    // cout << "c < d?  " << (c < d) << endl;
    // cout << "c <= d?  " << (c <= d) << endl;

    // cout << "get<0>(d)  " << ( get<0>(d) ) << endl;
    // swap(c,d);
    // for (int i = 0; i < c.size(); i++)
    // {
    //     cout << "c" << i << "=" << c.at(i) << endl;
    // }

    //6.辅助类tuple_size,tuple_element
    // std::array<float, 3> arr;
    // test(arr);

    // // 定义 array 并获取位于位置 0 的元素类型
    // std::array<int, 10> data{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // using T = std::tuple_element<0, std::array<int, 10>>::type; // int

    // std::cout << std::boolalpha;
    // std::cout << std::is_same<T, int>::value << '\n';

    // const auto const_data = data;
    // using CT = std::tuple_element<0, decltype(const_data)>::type; // const int

    // // tuple_element 的结果取决于仿 tuple 类型的 cv 限定
    // std::cout << std::is_same<T, CT>::value << '\n';
    // std::cout << std::is_same<CT, const int>::value << '\n';

    //7.迭代器iterator
    array<int, 5> arr1 = {1,2,3,4,5};
    //decltype(arr1) :: const_iterator c_iter;
    // decltype(arr1) :: iterator iter;
    // for (iter = arr1.begin();iter!=arr1.end();iter++)//可读可写
    // {
    //     *iter = 2;
    //     cout << "*iter  = " << *iter << endl;
    // }
    // for (auto c_iter = arr1.cbegin(); c_iter != arr1.cend(); c_iter++) //只读，不可写
    // {
    //     //*c_iter = 1;
    //     cout << "*c_iter  = " << *c_iter << endl;
    // }
    for (auto c_iter = arr1.rbegin(); c_iter != arr1.rend(); c_iter++) //只读，不可写
    {
        //*c_iter = 1;
        cout << "*c_iter  = " << *c_iter << endl;
    }

    for (auto c_iter = arr1.end()-1; c_iter != arr1.begin()-1; c_iter--) //只读，不可写
    {
        //*c_iter = 1;
        cout << "*c_iter  = " << *c_iter << endl;
    }
    return 0;
}
