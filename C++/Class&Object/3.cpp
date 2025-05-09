#include<iostream>
using namespace std;
void display(int n)
{
    n = 20;
    cout<<"\nValue of n = "<<n;
    cout<<"\nAddress of n = "<<&n;
}
int main()
{
    int num = 10;
    display(num);
    cout<<"\nValue of num = "<<num;
    cout<<"\nAddress of num = "<<&num;
    return 0;
}