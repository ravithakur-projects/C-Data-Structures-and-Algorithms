//  The code is a function that checks if the number passed in is prime.
//  The function starts by checking if the number is 1, and then it loops through all of its numbers from 2 to n-1.
//  If the number divided by any of those numbers equals 0, then it returns false.
//  Otherwise, it returns true.
//  The code attempts to check if a number is prime or not.
#include <iostream>
using namespace std;
bool PrimeNumberCheck(int n){
    if(n==1){
        return true;
    }
    for(int i=2;i<n;i++){
        if (n%i==0)
        {
            return false;
        }return true;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<PrimeNumberCheck(n);
}