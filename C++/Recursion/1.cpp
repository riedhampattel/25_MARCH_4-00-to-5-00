#include<iostream>
using namespace std;
void display(int num)//recursive function
{
    if(num>=1)
    {
        cout<<"Hello world!"<<endl;
        cout<<"Bye"<<endl;//3
        display(num-1);
    }
}
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    display(num);
    return 0;
}