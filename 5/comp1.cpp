//compstr1.cpp;显示一个单词，修改其首字母，然后再次显示这个单词，循环往复，直到strcmp()确定该单词与字符串“mate”相同为止

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char word[5]="?ate";
    for(char ch='a';strcmp(word,"mate");ch++)
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"finally "<<word<<endl;
    return 0;
}