//  The code is meant to calculate the sum of all natural numbers from 1 to 10.
//  The function GetSumNat(int n) is called with a parameter of n and returns the result as an int.
//  The first if statement checks whether or not the number passed in is 0, which would mean that it has reached its end.
//  If so, then it will return 0.
//  Otherwise, it will continue on by calling GetSumNat(n-1).
//  This means that if you want to know what the sum of all natural numbers from 1 to 10 are, then you should call this function with a value for n equal to 10 and pass in -1 as a parameter.
//  The code calculates the sum of all natural numbers from 1 to 10.
#include <iostream>
using namespace std;
int GetSumNat(int n){
    if(n==0){
        return 0;
    }
    return n+GetSumNat(n-1);
}
int main(){
    int n=10;
    cout<<GetSumNat(n);
}