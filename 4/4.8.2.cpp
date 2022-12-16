#include <iostream>
#include <cstring>

using namespace std;

int main (void)
{
    char animal[20]="bear";//字符串
    const char *bird="wren";//指向常量的字符型指针
    char *ps;

    cout<<animal<<" and "<<bird<<endl; //bear and wren

    cout<<"Enter a kind of animal:\n";
    cin>>animal;//bird

    ps=animal;//animal首地址给ps指针
    cout<<ps<<endl;//bird

    cout<<"Before using strcpy():\n"<<animal<<" at "<<(int *)animal<<endl;//bird at 0x61fdf0
    cout<<ps<<" at "<<(int *)ps<<endl;//bird at 0x61fdf0

    //ps 开创动态字符串数组内存，strlen(animal)：//字符串长度 没有空字符，bird+1=4
    ps=new char[strlen(animal)+1];
    strcpy(ps,animal);//将字符串复制到字符数组中
    cout<<"After using strcpy():\n"<<animal<<" at "<<(int *)animal<<endl;//
    cout<<ps<<" at "<<(int *)ps<<endl;
    delete [] ps;

    
    return 0;

}