#include <iostream>
using namespace std;

int main(){
    int x,rem;
    int rev=0;
    cin>>x;
    while(x>0){
        rem=x%10;
        x=x/10;
        rev=rev*10+rem;
    }cout<<rev;
}