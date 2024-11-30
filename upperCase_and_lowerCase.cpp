#include<iostream>
using namespace std;

void toUpper(char word[], int n)
{
    for( int i =0; i<n; i++)
    {
        int ch = word[i];
        if(ch>= 'A' && ch<= 'Z')
        {
            continue;
        }else
        {
            word[i]= ch - 'a' +'A';
        }
    }
}

void toLower(char word[], int n)
{
    for( int i =0; i<n; i++)
    {
        int ch = word[i];
        if(ch>= 'a' && ch<= 'a')
        {
            continue;
        }else
        {
            word[i]= ch - 'A' +'a';
        }
    }
}
int main()
{
    char str[50] = "apple";
    char str1[50] = "APPLE";

    toUpper(str, strlen(str));
    toLower(str1, strlen(str1));

    cout<<str<<endl;
    cout<<str1<<endl;
}