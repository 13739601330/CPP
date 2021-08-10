#include "man.hpp"
#include <iostream>
void man::speak(void)
{
    //person::speak(); //强制调用父类的speak方法
    cout << "man" << this->name << "说话" << endl;
}