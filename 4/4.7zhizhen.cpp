#include <iostream>

using namespace std;

int main(void)
{
    int updates=6;
    int *p_updates;//加*的是指针变量的名字，前面跟着类型，不是取值,定义一个指针变量
    p_updates=&updates;//指针里永远放的是地址

    cout<<"value:updates="<<updates<<endl;
    cout<<"value:*p_updates="<<*p_updates<<endl;//取值

    
    cout<<"address:updates="<<&updates<<endl;
    cout<<"address:p_updates="<<p_updates<<endl;

    *p_updates=*p_updates+1;
    cout<<"now:updates="<<updates<<endl;
    return 0;
}
