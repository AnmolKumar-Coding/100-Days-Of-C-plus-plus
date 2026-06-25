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
    cout << " the sum of 1 to " << N1 << endl;
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



// find all 1 to n1 is a prime numbers.
    
    int n1;
    int s = 2;

    cout << "enter the value of n1 :-" << endl;
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


//find if it is lowercase or uppercase or numerical( only from 0 to 9)

    int N2;

    cout << "Enter the value of N2" << endl;
    cin >> N2;

    if( (N2 >= 'a') && (N2 <= 'z')){
        cout << N2 << " is lowercase" << endl;

    } 
    else if((N2 >= 'A') && (N2 <= 'Z')){
        cout << N2 << " is uppercase" << endl;

    }
    else if ((N2 >= 0) && (N2 <= 9)){
        cout << N2 << " is numerical" << endl;
    }
    

// find the sum of all even numbers from 1 to n3

    int n3;
    int i4 = 1;
    int sum3 = 0;

    cout << "enter the value of n3 :-" << endl;
    cin >> n3;

    while( i4 <= n3){

        if(i4%2==0){
            sum3 = sum3 + i4;
        }
        i4 = i4 + 1;
    }
    cout <<"sum of all even numbers between 1 to " << n3 << "is :- " << sum3 << endl;

    
// Fahrenhite to celcius.

    float fahrenhite;

    cout << "enter the value of fahrenhite" << endl;
    cin >> fahrenhite;

    float celcius = 5.0/9.0 * ( fahrenhite - 32);

    cout << fahrenhite << " degree fahrenhite " << " = " << celcius << " degree celcius" << endl;


// is P4 prime or not?

    int p4;

    cout << "enter the value of p4 " << endl;
    cin >> p4;

    if((p4 == 2) || (p4 == 3) || (p4 == 5)){
        cout << "prime " << endl;

    }
    else if ((p4%2== 0) && (p4%3 == 0) && (p4%5 == 0)){
        cout << "not prime" << endl;
    }
    else{
        cout << "prime" << endl;
    }
}


