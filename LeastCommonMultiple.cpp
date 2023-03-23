//  The code is a function that calculates the least common multiple of two integers.
//  The code starts by declaring an integer variable called res, which is initialized to be the maximum value of n and m. Then it loops while true until it finds a number that has no remainder when divided by either n or m. It then returns this number as its result.
//  The main() function asks for two integers on input, inputs them into variables called n and m, and prints out the result of LeastCommonMultiple(n,m).
//  The code will print the least common multiple of n and m.
#include <iostream>
using namespace std;
int LeastCommonMultiple(int n, int m){
    int res = max(n,m);
    while(true){
        if(res%n==0 && res%m==0){
            return res;
        }res++;
    }return res;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    cout<<LeastCommonMultiple(n,m);
}