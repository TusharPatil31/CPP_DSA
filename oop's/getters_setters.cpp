#include<iostream>
#include<string>
using namespace std;

class student{
    float cgpa;
    string name;
public:
    void getPercentage()
    {
        cout<<(10*cgpa)<<"% \n";
    }
    
    //setters
    void setName(string nameVal)
    {
        name = nameVal;
    }
    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    //getters
    string getName()
    {
        return name;
    }
    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    student s1;
    s1.setName("Tushar");
    s1.setCgpa(9.0);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;
}