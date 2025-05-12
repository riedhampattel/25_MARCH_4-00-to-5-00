#include<iostream>
using namespace std;
class Demo
{
    private :
        int id;
        string name;
    public :
        Demo(int i,string n)
        {
            cout<<"\nParameterized constructor called";
            id = i;
            name = n;
        }
        Demo(Demo &obj)
        {
            cout<<"\nCopy constructor called";
            id = obj.id;
            name = obj.name;
        }
        Demo(){};
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Demo d1(101,"Rakesh");
    Demo d2(102,"Mehul");
    Demo d3(d1);
    Demo d4;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}