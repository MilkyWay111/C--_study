#include<iostream>
#include<fstream>
#include<cstdlib>//exit()

using namespace std;
const int SIZE=60;

int main(void)
{
    char filename[SIZE];
    ifstream inFile;
    cout<<"enter file  name:"<<endl;
    cin.getline(filename,SIZE);
    inFile.open(filename);//紫色块是方法
    if(!inFile.is_open())
    {
        cout<<"not open"<<endl;
        exit(EXIT_FAILURE);//宏定义
    }
    double value;//关键字
    double sum=0;
    int count=0;
    inFile>>value;
    while (inFile.is_open())
    {
        ++count;
        sum+=value;
        inFile>>value;
    }
    if(inFile.eof())
        cout<<"end"<<endl;
    else if(inFile.fail())
        cout<<"mismatch"<<endl;
    else
        cout<<"unknown"<<endl;
    if(count==0)
        cout<<"No data"<<endl;
    else
    {
        cout<<"count: "<<count<<endl;
        cout<<"sum: "<<sum<<endl;

    }
    inFile.close();
    return 0;
}