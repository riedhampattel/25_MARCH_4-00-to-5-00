#include<iostream>
using namespace std;
class Student
{
    public :
        int id;
        string name;
        double percentage;
        Student(int id,string name,double percentage)
        {
            this->id = id;
            this->name = name;
            this->percentage = percentage;
        }
};
class Address
{
    private :
        string city;
        Student *obj;
    public :
        Address(string address,Student *ref)
        {
            city = address;
            obj = ref;
        }
        void display()
        {
            cout<<"\nId = "<<obj->id;
            cout<<"\nName = "<<obj->name;
            cout<<"\nPercentage = "<<obj->percentage;
            cout<<"\nCity = "<<city;
        }
};
int main()
{
    Student s1(101,"Rohan",56.32);
    Address a1("Ahmedabad",&s1);
    a1.display();
    return 0;
}