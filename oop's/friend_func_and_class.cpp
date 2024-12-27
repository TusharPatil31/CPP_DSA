#include<iostream>
#include<string>
using namespace std;

class A {

    string secret = "secret data";
    friend class B;
    friend void revelSecret(A &obj);

};

class B { //becomes a friend of class
public: 
    void showSecret(A &obj)
    {
        cout<< obj.secret <<endl;
    }

};

void revelSecret(A &obj)  //becomes a friend of function
{
    cout<< obj.secret <<endl;
}

int main(){

    A a1;
    B b1;

    // b1.showSecret(a1);
    revelSecret(a1);

    return 0;

}
