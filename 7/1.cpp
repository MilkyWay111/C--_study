#include <iostream>

void simple();

int main()
{
    using namespace std;
    cout<<"main()will call the simple():"<<endl;
    simple();
    return 0;
}

void simple()
{
    std::cout<<"simple"<<std::endl;
}