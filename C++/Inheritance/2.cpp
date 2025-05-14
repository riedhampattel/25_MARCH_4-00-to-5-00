#include<iostream>
using namespace std;
class GrandParent
{
    public :
        void display1()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Parent : public GrandParent
{
    public :
        void display2()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent
{
    public :
        void display3()
        {
            cout<<"\nHello from Child class";
        }
};
class GrandChild : public Child
{

};
int main()
{
    Parent p1;
    p1.display1();
    p1.display2();   
    cout<<endl;
    Child c;
    c.display1();
    c.display2();
    c.display3();
    cout<<endl;
    GrandChild gc;
    gc.display1();
    gc.display2();
    gc.display3();
    return 0;
}