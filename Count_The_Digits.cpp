//  The code is a program that counts the number of digits in an integer inputted by the user.
//  The code starts off with declaring variables for x and res, which are used to store the value of x and count respectively.
//  Then, while loop is used to keep counting until it reaches zero.
//  After that, a return statement is used to return res as its final result.
//  The main function declares x as an integer variable and then reads in this value from cin using cin>>x; after reading in this value, cout<
//  The code attempts to count the number of digits in a given integer input.
#include <iostream>
using namespace std;

int CountDigits(int x){
    int res=0;
    while(x>0){
        x=x/10;
        res++;
    }
    return res;
}

int main(){
    int x;
    cin>>x;
    cout<<CountDigits(x)<<" ";
    cout<<endl;
}