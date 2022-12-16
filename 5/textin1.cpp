#include <iostream>
using namespace std;


int main(void)
{
    char ch;
    int count=0;
    cout<<"enter characters;# stop"<<endl;
    cin>>ch;
    while (ch!='#')
    {
        cout<<ch;
        count++;
        cin>>ch;
    }
    cout<<endl<<count<<endl;
    
    return 0;
}
