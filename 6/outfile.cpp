#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    char mobile[50];
    int year;
    double a_price;
    double b_price;

    ofstream outFile;//创建一个ofstream对象
    outFile.open("1.txt");//将该对象同一个文件关联起来
    
    cout<<"enter:"<<endl;
    cin.getline(mobile,50);
    cout<<"enter year"<<endl;
    cin>>year;
    cout<<"enter pricce:"<<endl;
    cin>>a_price;
    b_price=0.5*a_price;

    cout<<fixed;//表示用一般的方式输出浮点数
    cout.precision(2);//设置精确度为2位并返回上一次的设置。
    cout.setf(ios_base::showpoint);//在c++中是为了保留原有的类型精度
    cout<<"mark:"<<mobile<<endl;
    cout<<"$"<<a_price<<" $ "<<b_price<<endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile<<"Make :"<<mobile<<endl;
    outFile<<"year "<<year<<endl;
    outFile<<"$ "<<a_price<<"$ "<<b_price<<endl;

    outFile.close();
    return 0;
    
}