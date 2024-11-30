#include<iostream>
using namespace std;

bool isPalindrome(char word[], int n)
{
    int st =0 , end = n-1;
    while(st<end)
    {
        if(word[st++] != word[end--])
        {
            cout<<"Not valid palindrome\n";
            return false;
        }
    }
    cout<<"Valid palindrome\n";
    return true;
}

int main()
{
    char word[] = "racecar";
    isPalindrome(word, strlen(word));

}
