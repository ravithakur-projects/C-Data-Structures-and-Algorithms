//  The code is a function that calculates the greatest common divisor of two integers.
//  The code starts by declaring variables n and m, which are input from the user.
//  Next, it declares an integer variable res called "min(n,m)" which is initialized to be min(n,m).
//  Then it enters a while loop where it checks if both n%res==0 && m%res==0.
//  If this condition is true then break; will exit out of the loop and return 0 as its value.
//  Otherwise, res-- will decrease by 1 until either n or m reaches zero (whichever happens first), at which point break; will exit out of the loop and return 0 as its value.
//  The code prints the greatest common divisor of two integers.
#include <iostream>
using namespace std;
int GreatestCommonDivisor(int n, int m){
    int res = min(n,m);
    while(res>0){
        if(n%res==0 && m%res==0){
            break;
        }res--;
    }return res;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    cout<<GreatestCommonDivisor(n,m);
}