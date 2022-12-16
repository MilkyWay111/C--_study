#include <iostream>
#include <cstring>

using namespace std;

char *getname(void);//声明

int main(void)
{
    char *name;
    name=getname();
    cout<<name<<" at "<<(int *)name<<"\n";
    delete [] name;
    return 0;
}

//捕获键盘输入的字符串并存起来
char *getname(void)
{
    char temp[80];
    cout<<"Enter last name:";
    cin>>temp;
    char *pn=new char[strlen(temp)+1];//空字符 以及cstring头文件
    strcpy(pn,temp);
    return pn;
}