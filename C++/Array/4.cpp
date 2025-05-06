//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
    int a[100],size,i,index,element;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nEnter the element = ";
    cin>>element;
    int flag = 1;
    for(i=0;i<size;i++)
    {
        if(element==a[i])
        {
            cout<<"\n"<<element<<" is present on index number "<<i;
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"\nElement is no found in an array";
    }
    return 0;
}