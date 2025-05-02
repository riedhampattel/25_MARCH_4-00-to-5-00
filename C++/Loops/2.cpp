//Write a C++ program to find the Armstrong number for a given range of number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int start,end,i;
    cout<<"Enter the starting number = ";
    cin>>start;//5
    cout<<"Enter the ening number = ";
    cin>>end;//200
    for(i=start;i<=end;i++)
    {
        int digit = 0;
        int num = i;
        int temp = i;
        int rem,power,sum=0;
        while(num!=0)
        {
            num = num/10;
            digit++;
        }
        while(temp!=0)
        {
            rem = temp%10;
            power = pow(rem,digit);
            sum = sum + power;
            temp = temp/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}