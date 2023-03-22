//  The code is a program that calculates the factorial of a number.
//  The function is called FactorialOfNumber and it takes an integer as input, which is then multiplied by each value from 2 to n-1.
//  After multiplying all values from 2 to n-1, the result is returned back to fac.
//  The main() function starts with cin>>n; cout<
//  The code will print the factorial of number n.
#include <iostream>
using namespace std;
int FactorialOfNumber(int n){
    int fac=1;
    for(int i=2;i<=n;i++){
        fac=fac*i;
    }return fac;
}
int main(){
    int n;
    cin>>n;
    cout<<FactorialOfNumber(n);
}