#include <bits/stdc++.h>
using namespace std;
void PrimeFactors(int n){
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){
                cout<<i;
                x=x*i;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    PrimeFactors(n);
    for(int i=1;i<n;i++){
        cout<<i;
    }
}