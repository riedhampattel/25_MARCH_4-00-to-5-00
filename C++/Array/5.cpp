//Write a c++ program to insert an element in unsorted array, take index number and element from the user. 
#include<iostream>
using namespace std;
int main()
{
    int a[100],size,element,index,i;
    cout<<"\nEnter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nEnter the element = ";
    cin>>element;
    up:
    cout<<"\nEnter the index = ";
    cin>>index;
    if(index>=0 && index<=size)
    {
        for(i=size-1;i>=index;i--)
        {
            a[i+1] = a[i];
        }
        a[index] = element;
    }
    else
    {
        cout<<"\nIndex number is invalid";
        cout<<"\nLast element in on index is = "<<size-1;
        goto up;
    }
    cout<<"\nArray a after insertion = ";
    for(i=0;i<=size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}