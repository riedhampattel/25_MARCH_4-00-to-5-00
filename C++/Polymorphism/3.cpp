#include<iostream>
using namespace std;
class Demo
{
    private :
        int n1;
        int n2;
    public :
        Demo(int n1,int n2)
        {
            this->n1 = n1;
            this->n2 = n2;
        }
        Demo(){};
        Demo operator+(Demo &obj)
        {
            Demo temp;
            temp.n1 = n1 && obj.n1;
            temp.n2 = n2 && obj.n2;
            return temp;
        }
        void display()
        {
            cout<<"\nValue of n1 = "<<n1;
            cout<<"\nValue of n2 = "<<n2<<endl;
        }
};
int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    cout<<"\nValue of c = "<<c<<endl;

    Demo d1(10,20);
    Demo d2(30,40);
    Demo d3 = d1 + d2;

    d1.display();
    d2.display();
    d3.display();
    return 0;
}