#include<iostream>
#include<string>
using namespace std;

void tower_of_honai(int n , string source, string helper, string destination )
{
    if(n ==1)
    {
        cout<<"Transfer disk: "<< n << " from "<< source << " to " <<destination<<endl;
        return;
    }
    tower_of_honai(n-1, source, destination, helper);

    cout<<"Transfer disk: "<< n << " from "<< source << " to " <<destination<<endl;

    tower_of_honai(n-1, helper, source, destination);

}

int main()
{
    int n = 3;

    tower_of_honai(n, "A", "B", "C");
    return 0;

}