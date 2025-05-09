#include<iostream>
using namespace std;
class Student
{
    public :
        int roll;
        string name;
};
int main()
{
    Student s1;
    s1.roll = 101;
    s1.name = "Rohan";
    cout<<"\nRoll no. = "<<s1.roll;
    cout<<"\nName = "<<s1.name;
    return 0;
}