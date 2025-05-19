#include<iostream>
using namespace std;
template <typename T,int size>
void sorted(T (&arr)[size])
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int a[5]={4,2,3,5,1},i;
    cout<<"\nOriginal array = ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    sorted(a);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    char ch[5]={'D','q','F','G','z'};
    cout<<"\nOriginal array = ";
    for(i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }
    sorted(ch);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }

    float f[5]={45.234,45.25,45.2,85.14,56.2};
    cout<<"\nOriginal array = ";
    for(i=0;i<5;i++)
    {
        cout<<f[i]<<" ";
    }
    sorted(f);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
        cout<<f[i]<<" ";
    }
    
    string s[5]={"Tops","IT","Skill","Knowledge","Software"};
    cout<<"\nOriginal array = ";
    for(i=0;i<5;i++)
    {
        cout<<s[i]<<" ";
    }
    sorted(s);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}