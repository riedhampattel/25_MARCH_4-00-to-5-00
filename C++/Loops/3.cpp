/*
Write a program in C++ to find the last prime number that occurs before the entered number.
input := 50
output := 47
*/
#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"Enter the number = ";
    cin>>num;//10
    for(i=num;i>=2;i--)
    {
        int num = i,flag=1;
        for(j=2;j<=num/2;j++)
        {
            if(num%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Prime number = "<<i;
            break;
        }
    }
    return 0;
}