#include <iostream>
#define ZERO 0 //预处理命令
#include <climits> //宏定义

using namespace std;

int main(void)
{
    int n_int=INT_MAX;//climits
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;

    cout<<"int:"<<sizeof(n_int)<<"字节"<<endl;
    cout<<"short:"<<sizeof(n_short)<<"字节"<<endl;
    cout<<"long:"<<sizeof(n_long)<<"字节"<<endl;
    cout<<"llong:"<<sizeof(n_llong)<<"字节"<<endl;

    cout<<"int:"<<INT_MAX<<endl;

    return 0;
}