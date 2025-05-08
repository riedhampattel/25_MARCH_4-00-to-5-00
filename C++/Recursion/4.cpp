#include<iostream>
using namespace std;
int addarr(int arr[],int size)
{
    if(size!=0)
    {
        return arr[size-1] + addarr(arr,size-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int size,a[100],i;
    cout<<"Enter the size of an array = ";
    cin>>size;//5
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    int ans = addarr(a,size);
    cout<<"\nThe addition of all the elements = "<<ans;
    return 0;
}