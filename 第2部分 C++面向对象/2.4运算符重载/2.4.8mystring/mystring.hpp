#ifndef __MYSTRING_HPP__
#define __MYSTRING_HPP__

#include <iostream>

class mystring
{
private:
    char *pBuf; //定义一个char型指针用于指向字符串的实际内存起始地址，需要动态分配内存和回收
    int cnt;    //用于记录字符串的有效字符个数
public:
    //构造和析构函数
    mystring();
    mystring(const char *pSrc);
    ~mystring();
    //拷贝构造函数

    //成员函数
    void print(void);
    //运算符重载函数
    mystring &operator=(mystring &other);
};

#endif // !__MYSTRING_HPP__