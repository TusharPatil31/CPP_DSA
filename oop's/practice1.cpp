/*
    create User class with properties: id(private), username(public), & password(private)
    Its is should be initialized in a parameterised constructor
    It should have a getter and setter for password

*/

#include<iostream>
#include<string>
using namespace std;

class User{
private:
    int id;
    string password;

public:
    string username;

    User(int id)
    {
        this->id = id;
    }
    
    //getter
    string getPassword()
    {
        return password;
    }
    
    //setter
    void setPassword(string password)
    {
        this->password = password;
    }

};

int main()
{

    User u1(101);
    u1.username = "tpatil";
    u1.setPassword("Abc1234");

    cout<<u1.username<<endl;
    cout<<u1.getPassword()<<endl;
    
    return 0;
}