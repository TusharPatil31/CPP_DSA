#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    public:
        float salary;
        string subject;

};
class Student
{
    public:
        int rollno;
        float cgpa;
};

class TA : public Teacher, public Student{
    public:
        string name;

};

int main()
{
    TA t1;

    t1.name = "Tushar Patil";
    t1.subject = "Operating system";
    t1.cgpa = 9.0;

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.cgpa<<endl;

    return 0;

}