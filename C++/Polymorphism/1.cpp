#include<iostream>
using namespace std;
class Shape
{
    //square circle rectangle triangle
    public :
        Shape(int side)
        {
            cout<<"\nArea of Square is = "<<side*side;
        }
        Shape(double radius)
        {
            cout<<"\nArea of circle is = "<<3.14*(radius*radius);
        }
        Shape(int l,int b)
        {
            cout<<"\nArea of rectangle is = "<<l*b;
        }
        Shape(int b,double h)
        {
            cout<<"\nArea of triangle is = "<<0.5*(b*h);
        }
        Shape(double h,int b)
        {
            cout<<"\nArea of triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s1(4);
    Shape s2(5.2);
    Shape s3(5,6);
    Shape s4(4,2.5);
    Shape s5(2,4);
    return 0;
}