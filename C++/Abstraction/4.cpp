#include<iostream>
using namespace std;
class Shape//abstract class
{
    public :
        virtual void draw() = 0;//pure virtual function
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
    Square sq;
    s1 = &sq;
    s1->draw();
    Circle c;
    s1 = &c;
    s1->draw();
    return 0;
}