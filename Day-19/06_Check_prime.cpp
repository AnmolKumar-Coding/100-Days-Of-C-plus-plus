#include <iostream>
using namespace std;

//1 --> prime
//0 --> not a prime
bool isPrime (int n){

    for(int i = 2; i < n; i++ ){

        if(n%i==0){
            return 0;
        }

    }
    return 1;
}

int main(){

    int times;
    cout << "How many numbers you want to check :-" << endl;
    cin >> times;
    cout << endl;

    for (int i = 1; i <= times; i++){

        int number;
        cout <<"Enter the number you want to check:-" << endl;
        cin >> number;

        if(number == 0){

            cout << "0 is not a prime number" << endl;

        }
        else if (number == 1){

            cout << "1 is not a prime number" << endl;

        }
        else if(isPrime(number)){

            cout << number << " " << "is a prime number." << endl;

        }
        else{

            cout << number << " " << "is not a prime number." << endl;

        }

    }
    cout << endl;
}


//return type --> bool/int/void/etc... in functions.
//function parameter ---> this is inside the (  here ) in function in top... eg int ok(here is the function parameter).
//return statement --> is is responsible so the function gives answer..