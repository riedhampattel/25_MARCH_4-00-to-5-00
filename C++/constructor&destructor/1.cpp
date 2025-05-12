#include<iostream>
using namespace std;
class Student
{
    public :
        Student()//default constructor
        {
            cout<<"\nDefault constructor called";
        }
        ~Student()
        {
            cout<<"\nDestructor called";
        }
};
int main()
{
    Student s1;
    cout<<"\nCondition starts";
    if(1)
    {
        Student s2;
    }
    cout<<"\nCondition ends";
    return 0;
}