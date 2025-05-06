//Write a c++ program to take 2 arrays from the user and merge them in third array
#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[200];
    int sizea,sizeb,i,j,k;
    cout<<"\nEnter the size of an array a = ";
    cin>>sizea;
    for(i=0;i<sizea;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
        c[i] = a[i];
    }
    cout<<"\nEnter the size of an array b = ";
    cin>>sizeb;
    for(k=0;k<sizeb;k++)
    {
        cout<<"\nEnter the element in b["<<k<<"] = ";
        cin>>b[k];
    }
    for(j=0;j<sizeb;j++)
    {
        c[i] = b[j];
        i++;
    }
    cout<<"\nArray a = ";
    for(i=0;i<sizea;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nArray b = ";
    for(i=0;i<sizeb;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\nArray c = ";
    for(i=0;i<sizea+sizeb;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}