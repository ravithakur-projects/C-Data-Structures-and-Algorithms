//  The code is a function that takes an integer as input and prints the factorial of that number.
//  The main() function calls this function with 3, which is then printed to the screen.
//  The code prints the following: 3 1 2
#include <iostream>
using namespace std;
void fact(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    fact(n-1);
    cout<<n<<endl;
}
int main(){
    fact(3);
}