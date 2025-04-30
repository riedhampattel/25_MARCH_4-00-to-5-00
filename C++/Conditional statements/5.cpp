/*
Write a C++ program to read the roll no, name and marks of three subjects and calculate the total, percentage and grade.
(1% to 45% ---> 'C',45% to 80% ---> 'B', 80% to 100% ---> 'A')
*/
#include<iostream>
using namespace std;
int main()
{
    int roll;
    string name;
    int m1,m2,m3;
    cout<<"Enter the roll no. = ";
    cin>>roll;
    cout<<"Enter the name = ";
    cin>>name;
    cout<<"Enter the english marks = ";
    cin>>m1;
    cout<<"Enter the maths marks = ";
    cin>>m2;
    cout<<"Enter the science marks = ";
    cin>>m3;

    cout<<"Roll no. = "<<roll;
    cout<<"\nName = "<<name;
    cout<<"\nTotal Marks = "<<m1+m2+m3;
    cout<<"\nPercentage = "<<float(m1+m2+m3)/3;
    float percentage = float(m1+m2+m3)/3;
    if(percentage>=1 && percentage<45)
    {
        cout<<"\nGrade = C";
    }
    else if(percentage>=45 && percentage<80)
    {
        cout<<"\nGrade = B";
    }
    else
    {
        cout<<"\nGrade = A";
    }
    return 0;
}