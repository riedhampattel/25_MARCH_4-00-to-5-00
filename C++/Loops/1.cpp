/*
Write a program in C++ to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number = ";
    cin>>num;//14
    for(i=1;i<=10;i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}