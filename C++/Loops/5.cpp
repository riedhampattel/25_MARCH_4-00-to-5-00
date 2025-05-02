//Write a program in C++ to find the sum of the digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,i;
    cout<<"Enter the number = ";
    cin>>num;//12
    // while(num!=0)
    // {
    //     rem = num%10;
    //     sum = sum + rem;
    //     num = num/10;
    // }
    for(i=num;i!=0;i = i/10)
    {
        rem = i%10;
        sum = sum + rem;
    }
    cout<<"\nAddition of all the digits = "<<sum;
    return 0;
}