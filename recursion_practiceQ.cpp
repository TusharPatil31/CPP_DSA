#include<iostream>
#include<string>
using namespace std;

int contiguousSubstring(const string str, int start, int end)
{
    if(start > end)
    {
        return 0;
    }
    int count = (str[start] == str[end]) ? 1 : 0;

    count += contiguousSubstring(str, start+1, end);
    count += contiguousSubstring(str, start, end-1);
    count -= contiguousSubstring(str, start+1, end-1);

    return count;
}


int main()
{
    string str = "abcab";
    cout<<contiguousSubstring(str, 0, str.size()-1)<<endl;
    return 0;
}



