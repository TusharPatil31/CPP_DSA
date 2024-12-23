#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1,2,3,4};
    cout<<"Size : "<<vec1.size()<<endl; // Size : 4
    cout<<"Capacity : "<<vec1.capacity()<<endl; // Capacity : 4

    vec1.push_back(5);
    cout<<"Size : "<<vec1.size()<<endl; // Size : 5
    cout<<"Capacity : "<<vec1.capacity()<<endl; // Capacity : 8

    vec1.pop_back();
    cout<<"Size : "<<vec1.size()<<endl; // Size : 5
    cout<<"Capacity : "<<vec1.capacity()<<endl;  // Capacity : 8
    
}