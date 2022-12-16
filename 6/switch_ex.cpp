#include <iostream>
using namespace std;

void showmenu();
void report();
void comfort();

int main(void)
{
    showmenu();
    int choice;
    cin>>choice;
    while(choice!=5)
    {
        switch(choice)
        {
            case 1: cout<<"\a\n";
                    break;
            case 2:report();
                    break;
            case 3: cout<<"all day.\n";
                    break;
            case 4: comfort();
                    break;
            default: cout<<"not.\n";
        }
        showmenu();
        cin>>choice;
    }
    cout<<"byby"<<endl;
    return 0;
}

void showmenu()
{
    cout<<"enter 1-5:\n"
    "1alarm 2 report 3 alibi 4 comfort 5 quit \n";
}

void report()
{
    cout<<"business report"<<endl;

}

void comfort()
{
    cout<<"comfort"<<endl;
}