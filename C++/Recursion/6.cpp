#include<iostream>
using namespace std;
int fibo(int term)
{
    if(term==0)
    {
        return 0;
    }
    else if(term==1)
    {
        return 1;
    }
    else
    {
        return fibo(term-1) + fibo(term-2);
    }
}
int main()
{
    int term;
    cout<<"Enter the term = ";
    cin>>term;//2
    int ans = fibo(term);
    cout<<"\nnth element of the fibonacci series is = "<<ans;
    return 0;
}