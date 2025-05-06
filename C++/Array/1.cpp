//Write a c++ program to take an array from the user and copy that in another array
#include<iostream>
using namespace std;
int main()
{
    int a[100],copy[100];
    int size,i;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
        copy[i] = a[i];
    }
    cout<<"\nArray a = ";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nArray copy = ";
    for(i=0;i<size;i++)
    {
        cout<<copy[i]<<" ";
    }
    return 0;
}