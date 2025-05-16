#include<iostream>
using namespace std;
class Base
{
    private :
        int x = 10;
        string s1 = "Private";
    public :
        int y = 20;
        string s2 = "Public";
        void display()
        {
            cout<<"\nValue of x = "<<x;
            cout<<"\nValue of s1 = "<<s1;
        }
    protected :
        int z = 30;
        string s3 = "protected";
};
class Derived : public Base
{
    public :
        void display()
        {
            cout<<"\nValue of z = "<<z;
            cout<<"\nValue of s3 = "<<s3;
        }
};
int main()
{
    Base b;
    cout<<"\nValue of y = "<<b.y;
    cout<<"\nValue of s2 = "<<b.s2;
    b.display();
    Derived d;
    d.display();
    return 0;
}