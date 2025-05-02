//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i,gcd;
    cout<<"Enter the value in num1 = ";
    cin>>num1;//15
    cout<<"Enter the value in num2 = ";
    cin>>num2;//20

    int temp = num1<num2 ? num1:num2;
    
    for(i=1;i<=temp;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
    }
    cout<<"\nGCD = "<<gcd;
    return 0;
}