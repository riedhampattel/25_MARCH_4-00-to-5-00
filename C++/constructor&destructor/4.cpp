#include<iostream>
using namespace std;
class Student
{
    private :
        int id;
        string name;
    public :
        Student(int id,string name)
        {
            this->id = id;
            this->name = name;
        }
        void display()
        {
            cout<<"\nValue of id = "<<id;
            cout<<"\nValue of name = "<<name;
        }
};
int main()
{
    Student s1(101,"Rohan");
    Student s2(102,"Mehul");
    s1.display();
    s2.display();
    return 0;
}