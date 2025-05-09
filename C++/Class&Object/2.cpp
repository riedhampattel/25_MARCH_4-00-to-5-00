#include<iostream>
using namespace std;
class Student
{
    private :
        int roll;
        string name;
    public :
        void set(int i,string n)
        {
            roll = i;
            name = n;
        }
        void get()
        {
            cout<<"\nId = "<<roll;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Student s1;
    s1.set(101,"Rohan");
    s1.get();
    return 0;
}