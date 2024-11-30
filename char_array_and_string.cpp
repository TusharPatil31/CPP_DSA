#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    // char str[50];
    // cin>>str; // if we input "Tushar patil"
    // cout<<str<<endl; // output will be "Tushar" 
    
    // char str1[50] = "abcd";
    // str1 = "ahgs"; //invalid 

    // char str3[50];
    // cin.getline(str3, 50); // if we input "Tushar patil"
    // cout<<str3<<endl; //output will be "Tushar patil" 

    // string str4;
    // cin>>str4; //if we input "Tushar patil"
    // cout<<str4<<endl; // output will be "Tushar" 

    // string str5 = "positive";
    // str5 = "negative";
    // cout<<str5<<endl;  // output will be "nagative" 

    // string str6;
    // getline(cin, str6);  // if we input "Tushar patil"
    // cout<<str6<<endl; //output will be "Tushar patil"

    string str7 = "race a car";

    for(char ch : str7)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
    


}