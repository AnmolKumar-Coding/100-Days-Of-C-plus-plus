#include <iostream>
using namespace std;

int number(int n){

    if (n==1 || n == 2){
        return (n - 1);
    }
    int sum = 0;

    for(int a = 0, b = 1 , i = 3; i <= n; i++ ){

        sum = a + b;

        a = b;
        b = sum;
        
    }
    return sum;
}

int main (){

    int times;
    cout << "Enter how many times you want to execute the command :-" << endl;
    cin >> times;

    cout << endl;

    for (int i = 1; i <= times; i++){

        int n;
        cout << "Enter the value of n :- " << endl;
        cin >> n;
        cout << endl;

        cout << "The nth number of fibonacci series is :- " << number(n) << endl;
        cout << endl;
    }


    return 0;
    
}