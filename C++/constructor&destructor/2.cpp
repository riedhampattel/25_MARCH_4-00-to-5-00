#include<iostream>
using namespace std;
class Student
{
    private :
        int roll;
        string name;
    public :
        Student(int r,string n)//parameterized constructor
        {
            roll = r;
            name = n;
        }
        void display()
        {
            cout<<"\nRoll no. = "<<roll;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Student s1(101,"Rohan");
    s1.display();
    Student s2(102,"Rahul");
    s2.display();
    return 0;
}