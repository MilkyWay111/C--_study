#include <iostream>
using namespace  std;


int main(void)
{
    int night=1001;
    int *pt=new int;
    *pt=1001;

    cout<<"night value="<<night<<endl<<"night address="<<&night<<endl;
    cout<<"int value="<<*pt<<endl<<"int address="<<pt<<endl;

    return 0;
}
