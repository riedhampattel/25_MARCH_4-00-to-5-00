#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the value of n1 = ";
    cin>>n1;
    cout<<"Enter the value of n2 = ";
    cin>>n2;

    if(n1>n2)
    {
        cout<<n1<<" is the biggest number";
    }
    else
    {
        cout<<n2<<" is the biggest number";
    }
    return 0;
}