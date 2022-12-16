#include <iostream>
using namespace std;

struct food
{
    char name[20];
    int number;
    double price;
};


int main(void)
{
    //创建动态结构
    food *ps =new food;

    cout<<"Enter name of food item:"<<endl;
    cin.get(ps->name,20);
    cout<<"Enter number of food item"<<endl;
    cin>>(*ps).number;
    cout<<"Enter price of food item"<<endl;
    cin>>ps->price;

    cout<<"Name:"<<ps->name<<" Number:"<<(*ps).number<<" Price:"<<ps->price<<endl;
    delete ps;

    return 0;
}