//  The code is a program that takes an input from the user and prints out the palindrome number of it.
//  The code starts by declaring two variables, x and chk, which will be used to store the value of their respective inputs.
//  Then, while loop is created with condition temp>0.
//  This means that as long as there is a value greater than zero in temp, then this loop will continue to run until it reaches zero again.
//  Inside the loop, variable chk is set equal to 10% of whatever value was stored in temp at that point in time (temp=temp/10).
//  After each iteration through the loop, variable ans is multiplied by 10 and added onto what's stored in chk (ans=ans*10+chk).
//  Finally after every ten iterations through this while loop has been completed (i.e., after all 100 iterations have been completed), then temp will be divided by ten before continuing on with more iterations through this while-loop structure.
//  The output for PalindromeNumber(x) would be x if x were not a palindrome number because ans==x would always return true when comparing two numbers if they are equal; however since we're checking whether or not x equals its own
//  The code will print the number 10 on the screen.
#include <iostream>
using namespace std;
bool PalindromeNumber(int x){
    int chk,temp=x;
    int ans=0;
    while(temp>0){
        chk=temp%10;
        ans=ans*10+chk;
        temp=temp/10;
    }
    return(ans==x);
}
int main(){
    int x;
    cin>>x;
    cout<<PalindromeNumber(x);
}