#include<iostream>
using namespace std;
int power(int b,int e)
{
    if(e==0)
    {
        return 1;
    }
    else if(e==1)
    {
        return b;
    }
    else
    {
        return b * power(b,e-1);
    }
}
int main()
{
    int base,exponent;
    cout<<"\nEnter the base = ";
    cin>>base;//2
    cout<<"\nEnter the exponent = ";
    cin>>exponent;//4
    int ans = power(base,exponent);
    cout<<"\nPower is = "<<ans;
    return 0;
}