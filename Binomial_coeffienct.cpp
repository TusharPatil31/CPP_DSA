#include<iostream>
using namespace std;

double factorial(int n){
    double fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

double BioCoeff(int n, int r){
    double val1 = factorial(n);
    double val2 = factorial(r);
    double val3 = factorial(n-r);

    double restult = val1/(val2*val3);
    return restult;
}
int main()
{
    cout<<BioCoeff(22,11)<<endl;

    return 0;
}