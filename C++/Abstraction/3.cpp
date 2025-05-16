#include<iostream>
using namespace std;
class Shape//abstract class
{
    public :
        virtual void draw()//virtual function
        {
            cout<<"\nDrawing Shape";
        }
};
class Circle : public Shape
{
    public :
        void draw()
        {
            cout<<"\nDrawing a circle";
        }
};
class Square : public Shape
{
    public :
        void draw()
        {
            cout<<"\nDrawing a square";
        }
};
int main()
{
    Shape *s1;
    // s1->draw();
    Square sq;
    s1 = &sq;
    s1->draw();
    Circle c;
    s1 = &c;
    s1->draw();
    return 0;
}