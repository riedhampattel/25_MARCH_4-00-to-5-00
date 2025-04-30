//Write a C++ program to check whether a triangle can be formed with the given values for the angles.(additon of all angles should be 180 deg)
#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cout<<"Enter the angle1 = ";
    cin>>a1;
    cout<<"Enter the angle2 = ";
    cin>>a2;
    cout<<"Enter the angle3 = ";
    cin>>a3;

    if((a1+a2+a3)==180)
    {
        cout<<"Triangle is possible";
    }
    else
    {
        cout<<"Triangle is not possible";
    }
    return 0;
}