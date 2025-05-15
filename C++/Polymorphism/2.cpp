#include<iostream>
using namespace std;
class Shape
{
    //square circle rectangle triangle
    public :
        void shape(int side)
        {
            cout<<"\nArea of Square is = "<<side*side;
        }
        void shape(double radius)
        {
            cout<<"\nArea of circle is = "<<3.14*(radius*radius);
        }
        void shape(int l,int b)
        {
            cout<<"\nArea of rectangle is = "<<l*b;
        }
        void shape(int b,double h)
        {
            cout<<"\nArea of triangle is = "<<0.5*(b*h);
        }
        void shape(double h,int b)
        {
            cout<<"\nArea of triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s1;
    s1.shape(4);
    s1.shape(4,2);
    s1.shape(2.5);
    s1.shape(2.5,4);
    s1.shape(4,2.5);
    return 0;
}