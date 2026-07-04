#include <iostream>
#include<math.h>
using namespace std;

int main(){

    int n;

    cout << "Enter the value of n :-" << endl;
    cin >> n;

    cout << "The number is :-" <<endl;

    int i = 0;
    int ans = 0;

    while (n>0){

        int digit = n%10;

        if ( digit == 1){
            ans = ans + pow(2 , i);

        }
        n /= 10;
        i++;
    }
    cout << ans << endl;
}