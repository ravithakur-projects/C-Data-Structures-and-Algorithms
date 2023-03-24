//  The code is a function that calculates the sum of the digits in an integer.
//  The code starts by checking if n is 0, and then returns 0.
//  If not, it checks to see how many times 10 divides into n (10/n) and adds that number to SumOfDigits(n).
//  The code prints the sum of digits of a number.
#include <iostream>
using namespace std;
int SumOfDigits(int n){
    if(n==0){
        return 0;
    }
    else{
        return SumOfDigits(n/10)+ n%10;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<SumOfDigits(n);
}