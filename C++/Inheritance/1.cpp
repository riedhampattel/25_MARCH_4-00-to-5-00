#include<iostream>
using namespace std;
class Parent //base class
{
    public :
        // Parent()
        // {
        //     cout<<"\nHello from Parent class";
        // }
        void display()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent //derived class
{
    public :
        // Child()
        // {
        //     cout<<"\nHello from Child class";
        // }
};
int main()
{
    Child c1;
    c1.display();
    return 0;
}