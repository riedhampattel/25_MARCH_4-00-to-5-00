#include<iostream>
using namespace std;
class Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Parent class";
        }
};
class Brother : public Parent
{
    public :
        void display1()
        {
            cout<<"\nHello from Brother class";
        }
};
class Sister : public Parent
{
    public :
        void display2()
        {
            cout<<"\nHello from Sister class";
        }
};
class Child : public Brother
{

};
class Cousin : public Sister
{

};
int main()
{
    Child c;
    c.display1();
    c.display();

    Cousin cs;
    cs.display2();
    cs.display();
    return 0;
}