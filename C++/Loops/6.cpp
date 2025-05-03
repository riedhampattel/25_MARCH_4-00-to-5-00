/*
Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Sample Output:
Input number of terms: 
1 + 11 + 111 + 1111 + 11111 = 12345
The sum of the series is: 12345
*/
#include<iostream>
using namespace std;
int main()
{
    int term,i;
    long int num = 1,sum=0;
    cout<<"Enter the terms = ";
    cin>>term;
    for(i=1;i<=term;i++)
    {
        sum = sum + num;
        cout<<num;
        if(i<term)
        {
            cout<<" + ";
        }
        else
        {
            cout<<" = "<<sum;
        }
        num = (num*10) + 1;
    }
    return 0;
}