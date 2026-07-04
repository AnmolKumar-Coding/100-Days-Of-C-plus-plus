#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;

    cout << "Enter the value of n :- " << endl;
    cin >> n;

    cout << "The binary form of" << " " << n << " is :-" << endl;

    int i = 0;

    int ans = 0;

    while(n>0){
        
        int bit = n & 1;

        ans = ans + ( bit * pow(10, i));

        n = n >> 1;
        i++;
    }

    cout << ans << endl;
}
