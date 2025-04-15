#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void print(list<int> ll)
{
    list<int>::iterator iter;
    for(iter=ll.begin(); iter != ll.end(); iter++)
    {
        cout<<(*iter)<<"->";
    }
    cout<<endl;
}

int main(){
    
    list<int> ll;
    
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    
    print(ll);
    
    cout<<ll.size()<<endl;
    
    cout<<ll.front()<<endl;
    cout<<ll.back()<<endl;
    
    
    
}