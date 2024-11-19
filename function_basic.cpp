#include<iostream>
using namespace std;

int reverese(int n){
    int sum = 0;
    while(n>0)
    {
        int lastdig = n % 10;
        sum = sum * 10 + lastdig;
        n = n/10;
    }
    return sum;
}

int largest_of_three(int a, int b, int c){
    
    if(a>=b && a>=c){
        cout<<"Largest is "<<a<<endl;
        return a;
    }else if (b>=c)
    {
        cout<<"Largest is "<<b<<endl;
        return b;
    }else
    {
        cout<<"Largest is "<<c<<endl;
        return c;
    }

}

char next_char(char ch){
    if (ch == 'z')
    {
        return 'a';
    } else if(ch == 'Z')
    {
        return 'A';
    }else{
    return ch+1;
    }
}

int main()
{
    // int n =1232;
    // if(n == reverese(n))
    // {
    //     cout<<"Palindrome Number"<< endl;
    // }

    // largest_of_three(10,3,4);

    cout<<next_char('C')<<endl;
    return 0;
}