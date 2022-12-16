//nested.cpp
#include <iostream>
using namespace std;
const int citi=5;
const int years=4;

int main(void)
{
    const char * cities[citi]=
    {
        "xiix",
        "haha",
        "hxs",
        "cchdsj",
        "cdsbh"
    };
    int maxtemps[years][citi]=
    {
        {1,2,3,4,5},
        {5,4,3,2,1},
        {0,9,8,6,5},
        {3,4,5,6,7}
    };

    cout<<"max temp"<<endl;
    for(int i=0;i<citi;i++)
    {
        cout<<cities[i]<<":\t";
        for(int j=0;j<years;++j)
        {
            cout<<maxtemps[j][i]<<"\t";
           
        }
         cout<<endl;
    }
    return 0;
}
