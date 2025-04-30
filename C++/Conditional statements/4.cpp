/*
Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value of x = ";
    cin>>x;
    cout<<"Enter the value of y = ";
    cin>>y;

    if(x>0 && y>0)
    {
        cout<<"first quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"second quadrant";
    }
    else if(x<0 && y<0)
    {
        cout<<"third quadrant";
    }
    else if(x>0 && y<0)
    {
        cout<<"fourth quadrant";
    }
    else
    {
        cout<<"origin point";
    }
    return 0;
}