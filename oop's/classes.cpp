#include<iostream>
using namespace std;

class student{
public:
    float cgpa;
    string name;

    void getPercentage()
    {
        cout<<(10*cgpa)<<"% \n";
    }
};

int main()
{
    student s1;
    s1.name = "Tushar";
    s1.cgpa = 9.0;

    cout<<s1.name<<endl;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
    return 0;
}