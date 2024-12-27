#include<iostream>
#include<string>
using namespace std;

class Person{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this-> name = name;
        this-> age = age;
    }
};


class Student: public Person{
private:
    string studentID;

public:
    Student(string n, int a, string id) : Person(n, a)
    {
        studentID = id;

    }

    void displayStudentInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Student ID: "<<studentID<<endl;

    }

};

int main()
{
    Student s1("Tushar", 27, "Thambitha");
    s1.displayStudentInfo();

    return 0;
}