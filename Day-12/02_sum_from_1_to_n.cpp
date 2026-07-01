#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the value of n :- " << endl;
    cin >> n;

    int sum = 0;

    for(int i = 1; i<=n; i++){
        sum += i;
    }
    cout << "The sum of 1 to " << n << " is :- " << endl;
    cout << sum << endl;

}