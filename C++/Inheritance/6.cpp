#include<iostream>
using namespace std;
class GrandParent
{
    public :
        GrandParent()
        {
            cout<<"\nGrandParent class constructor called";
        }
        void display()
        {
            cout<<"\nHello from GrandParent class";
        }    
};
class Father : virtual public GrandParent
{
    public :
        Father()
        {
            cout<<"\nFather class constructor called";
        }
        void display1()
        {
            cout<<"\nHello from GrandParent class";
        }    
};
class Mother : virtual public GrandParent
{
    public :
        Mother()
        {
            cout<<"\nMother class constructor called";
        }
        void display2()
        {
            cout<<"\nHello from GrandParent class";
        }    
};
class Child : public Father,public Mother
{
    public :
    Child()
        {
            cout<<"\nChild class constructor called";
        }
};
int main()
{
    Child c;
    c.display();
    return 0;
}