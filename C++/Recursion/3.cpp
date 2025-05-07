#include<iostream>
using namespace std;
int add(int num)
{
    if(num!=0)
    {
        return num + add(num-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;//3
    int ans = add(num);
    cout<<"\nThe addition is = "<<ans;
    return 0;
}