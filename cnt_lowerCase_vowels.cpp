#include<iostream>
using namespace std;

int cntVowels(string str)
{   
    int cnt =0;

    for(int i=0; i< str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string str = "tushar patil";

    cout<<cntVowels(str)<<endl;

}