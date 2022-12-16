#include <iostream>
using namespace std;

int main(void)
{
    double wages[3]={10000.0,20000,30000};
    short stacks[3]={3,2,1};

    //数组名是数组的首地址
    double *pw=wages;
    short *ps=stacks;

    cout<<"pw="<<pw<<",*pw="<<*pw<<endl;
    pw=pw+1;
    cout<<"add 1:"<<"pw="<<pw<<",*pw="<<*pw<<"\n"<<endl;

    cout<<"ps="<<ps<<",*ps="<<*ps<<endl;
    ps=ps+1;
    cout<<"add 1:"<<"ps="<<ps<<",*ps="<<*ps<<"\n"<<endl;

    cout<<sizeof(wages)<<"\n"<<endl;
    cout<<sizeof(pw)<<"\n"<<endl;

    cout<<"数组名"<<wages<<"\n"<<"&数组名"<<&wages;    

    return 0;
}