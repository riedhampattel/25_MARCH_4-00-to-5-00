#include<iostream>
using namespace std;
template <typename T>
void swapping(T &n1,T &n2)
{
    T temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a=10,b=20;
    cout<<"\nValue of a before swapping = "<<a;
    cout<<"\nValue of b before swapping = "<<b;
    swapping(a,b);
    cout<<"\nValue of a after swapping = "<<a;
    cout<<"\nValue of b after swapping = "<<b<<endl;

    char x='A',y='B';
    cout<<"\nValue of x before swapping = "<<x;
    cout<<"\nValue of y before swapping = "<<y;
    swapping(x,y);
    cout<<"\nValue of x after swapping = "<<x;
    cout<<"\nValue of y after swapping = "<<y<<endl;

    float f1=89.56,f2=25.12;
    cout<<"\nValue of f1 before swapping = "<<f1;
    cout<<"\nValue of f2 before swapping = "<<f2;
    swapping(f1,f2);
    cout<<"\nValue of f1 after swapping = "<<f1;
    cout<<"\nValue of f2 after swapping = "<<f2<<endl;

    string s1="Hello",s2="Bye";
    cout<<"\nValue of s1 before swapping = "<<s1;
    cout<<"\nValue of s2 before swapping = "<<s2;
    swapping(s1,s2);
    cout<<"\nValue of s1 after swapping = "<<s1;
    cout<<"\nValue of s2 after swapping = "<<s2<<endl;
    return 0;
}