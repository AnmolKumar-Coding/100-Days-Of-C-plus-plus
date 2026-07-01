#include <iostream>
using namespace std;

int main(){
    
    int n;

    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "the answer is :- ";
    bool isprime = 1;

    for(int i = 2; i < n; i++ ){

        if(n%i == 0){
            isprime = 0;
            break;

        }
    }
    if(isprime == 1){
        cout << "prime" << endl;
    }
    else{
        cout << "not prime" << endl;
    }
}