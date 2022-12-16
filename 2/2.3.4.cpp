#include <iostream>
using namespace std;

int stonetolb(int);

int main(void)
{
    int stone;
    cout<<" 请输入"<<endl;
    cin>>stone;
    int pounds=stonetolb(stone);
    cout<<stone<<"stone->pounds"<<pounds<<endl;
    return 0;
}

int stonetolb(int sys)
{
    return 14*sys;
}