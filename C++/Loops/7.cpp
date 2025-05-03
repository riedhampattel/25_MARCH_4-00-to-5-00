/*
Write a c++ program to dislay this pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;
    up:
    cout<<"\nEnter the row number = ";
    cin>>row;//4
    if(row%2==0)
    {
        cout<<"\nPlease enter odd numbers only!";
        goto up;
    }
    int row1 = (row/2) + 1;
    int row2 = row - row1;
    int spc = row1-1;
    int star = row2;
    for(i=1;i<=row1;i++)
    {
        for(j=1;j<=spc;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        spc--;
        cout<<endl;
    }
    for(i=1;i<=row2;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=star;k++)
        {
            cout<<"* ";
        }
        star--;
        cout<<endl;
    }
    return 0;
}