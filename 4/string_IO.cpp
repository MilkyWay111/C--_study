#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main (void)
{
    char charry[20];
    cout<<"输入前charry字符串数组长度:"<<strlen(charry)<<endl;//数组未被定义，随机
    string str1;
    cout<<"输入前str类长度:"<<str1.size()<<endl;

    //捕获，字符串数组
    cout<<"请输入一行"<<endl;
    cin.getline(charry,20);
    cout<<"输入的charry:"<<charry<<endl;

    //捕获，string
    cout<<"请输入一行"<<endl;
    getline(cin,str1);
    cout<<"输入的str1:"<<str1<<endl;

    return 0;
}