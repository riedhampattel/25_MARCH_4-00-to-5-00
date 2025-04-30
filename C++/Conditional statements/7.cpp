/*
Write a C++ program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character.
*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character = ";
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        cout<<ch<<" is an alphabet";
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"It is a number";
    }
    else
    {
        cout<<ch<<" is a special character";
    }
    return 0;
}