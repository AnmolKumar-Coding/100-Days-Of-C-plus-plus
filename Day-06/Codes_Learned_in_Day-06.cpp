//this is all done in 23 rd june 2026.. i didnt have time to uplaod it because of prepartions for going to college.

#include <iostream>
using namespace std;

// Print all Odd numbers Between 1 and N "N included".

int main(){

    int N;

    int S = 1;

    cout << "Enter the value of N :- " << endl;
    cin >> N;

    cout << "Odd numbers between 1 to " << N << endl;

    while (S<=N){

        cout << S << endl;

        S = S + 2;
        
    }



// Find sum from 1 to N1?

    int N1;

    int sum = 0;
    int num = 1;

    cout << " Type the value of N1" << endl;
    cin >> N1;

    while (num <= N1){
        
        sum = sum + num;

        num = num + 1;

    } 
    cout << " the num of 1 to " << N1 << endl;
    cout << sum << endl;



//find n! ?

    double n;

    double ans = 1;
    double num1 = 1;

    cout << "enter the value of n" << endl;
    cin >> n;

    while(num1 <= n){

        ans = ans * num1;

        num1 = num1 + 1;
    }

    cout << "Multiplication of 1 to " << n << " is " << endl;

    cout << ans << endl;



// find all 1 to n is a prime numbers.
    
    int n1;
    int s = 2;

    cout << "enter the value of n :-" << endl;
    cin >> n1;

    cout << "the prime numbers between 0 and " << n1 << " is :-" <<endl;

    if (n1>=2){
        cout << "2 is prime" << endl;
    }
    if (n1>=3){
        cout << "3 is prime" << endl;
        }
    if (n1 >= 5){
        cout << "5 is prime" << endl;
    }

    while (n1>=s){
        if((s%2 != 0) &&(s%3 != 0) && (s%5 != 0) ){
                cout << s << " is prime" << endl;
        }
        s = s + 1; 
        
    }
}


