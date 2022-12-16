#include <iostream>
using namespace std;

//一般结构体放main函数前面
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
}in_1,in_2={"hh",1.2,5.6};//将变量名放在结束括号后面即可直接创建结构变量，甚至可以进行初始化

int main(void)
{
    /* code */
    
    in_1=in_2;//赋值
    cout<<"赋值 "<<in_1.name<<endl;

    return 0;
}