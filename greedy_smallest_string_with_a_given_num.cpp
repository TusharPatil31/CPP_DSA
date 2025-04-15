#include <iostream>
#include <vector>
using namespace std;

string smallest_string(int n, int k){
    string ans ="";
    while(n!=0){
        int ch = k-(n-1)*26;
        if(ch<=0){
            ans.push_back('a');
            n--;
            k--;
        }else{
            ans.push_back(ch+'a'-1);
            n--;
            k -= ch;
        }
    }
    cout<<"Ans : "<<ans<<endl;
    return ans;
}

int main(){
    int n=5, k=73;
    smallest_string(n,k);
    
    // cout<<21%24<<endl;
    
    return 0;
}