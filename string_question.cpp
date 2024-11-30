#include<iostream>
using namespace std;

bool isSame(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[i])
        {
            continue;
        }else
        {
            for (int j = 0; j < s2.length(); j++)
            {
                if(s1[i]==s2[j] && s1[j]==s2[i])
                {
                    swap(s2[i], s2[j]);

                }
            }   
        }
    }
    if(s1 == s1)
    {
        return true;
    }else
    {
        return false;
    }
}



//Other solution
bool areAlmostEqual(string s1, string s2)
{

    if(s1.length() != s2.length())
    {
        return false;
    }

    char diffChar1, diffChar2;
    int diff =0;

    for( int i = 0 ; i<s1.length(); i++)
    {
        if(s1[i] != s2[i])
        {
            if(!diff)
            {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }else
            {
                if(s1[i] != diffChar2 || s2[i] != diffChar1)
                {
                    return false;
                }
            }
            diff++;
        }
        if(diff > 2)
        {
            return false;
        }

    }
    if (diff == 1)
    {
        return false;
    }

    return true;

}

int main()
{
    string s1 = "bank";
    string s2 = "kanb";
    
    cout<<areAlmostEqual(s1,s2)<<endl;

}