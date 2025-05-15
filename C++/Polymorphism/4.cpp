#include<iostream>
using namespace std;
class GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Parent : public GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Child class";
        }
};
class GrandChild : public Child
{
    public :
        void display()
        {
            cout<<"\nHello from GrandChild class";
        }
};
int main()
{
    GrandChild gc;
    gc.display();
    Child c;
    c.display();
    return 0;
}