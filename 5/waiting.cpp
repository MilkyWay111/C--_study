#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
    cout<<"enter time,(s): "<<endl;
    float secs;
    cin>>secs;
    clock_t delay=secs*CLOCKS_PER_SEC;
    cout<<"starting"<<endl;
    clock_t start =clock();
    cout<<start<<endl;
    while (clock()-start<delay)
    {
        
    }
    cout<<"done"<<endl;
    
    cout<<clock()-start<<endl;
    return 0;
}
