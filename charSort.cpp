//Time complexity o(n^2)

#include <iostream>
using namespace std;

void print(char *ch, int n){

    for(int i = 0; i<n; i++)
    {
        cout<<ch[i]<<" ";
    }
    cout<<endl;

}
void charsort(char *ch, int n)
{
    for(int i= 1; i<n; i++)
    {
        int currchar = ch[i];
        int prev = i-1;
        while(prev>=0 && ch[prev]>currchar)
        {
            swap(ch[prev],ch[prev+1]);
            prev--;
        }
        
        ch[prev+1] = currchar;
    }
    print(ch, n);
}

int main()
{
    char ch[6] = {'d','c','f','e','a','b'};
    charsort(ch, 6);
}