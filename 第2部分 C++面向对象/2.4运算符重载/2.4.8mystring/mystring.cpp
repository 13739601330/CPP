#include "mystring.hpp"

//构造和析构函数

mystring::mystring()
{
}
mystring::mystring(const char *pSrc)
{
    //就是将所给字符串复制一份到当前对象，复制前要先给当前对象分配动态内存
    //而分配多少内存取决于传入的字符串长度，所以要先求出字符串长度

    //1.求出pSrc字符串长度
    const char *p = pSrc;
    this->cnt = 0;
    while (*p++ != '\0')
    {
        this->cnt++;
    }
    //2.给当前对象分配内存
    this->pBuf = new char[cnt + 1];
    //3.复制
    p = pSrc;
    char *pDes = this->pBuf;
    while (*p != '\0')
    {
        *pDes++ = *p++;
    }
    *pDes = '\0';
   
}

mystring::~mystring()
{
    delete[] this->pBuf;
}

//拷贝构造函数

//成员函数
void mystring::print(void)
{
    std::cout << "字符串长度：" << this->cnt <<  std::endl;
    char *p = this->pBuf;
    while (*p != '\0')
    {
       std::cout << *p++ ;
    }
    
    std::cout <<  std::endl;
}
//运算符重载函数
mystring &mystring::operator=(mystring &other)
{
    //释放掉原来的内存

    delete[] this->pBuf;
    //分配新内存
    this->cnt = other.cnt;
    this->pBuf = new char[other.cnt+1];
    //就是将other的内容复制到this
    char *p1 = this->pBuf;
    char *p2 = other.pBuf;
    while (*p2 != '\0')
    {
        *p1++ = *p2++;
    }
    
    return *this;
}