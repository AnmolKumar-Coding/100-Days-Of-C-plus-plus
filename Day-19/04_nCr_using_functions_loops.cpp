#include <iostream>
using namespace std;

//the function calls the function which is above them.. if you write a function and make it call a function below it then it will cause an error.
int Factorial(int fact){

    int ans = 1;

    for (int i = 1; i <= fact; i++){

        ans = ans * i;

    }
    return ans;
}

int nCr ( int n , int r){

    int numerator = Factorial(n);
    int denominator = Factorial(r) * Factorial(n-r);

    int ans = numerator/denominator;

    return ans;

}


int main(){
    
    int times ;
    cout << "How many times you want to find out nCr :-" << endl;
    cin >> times;

    for (int i = 1; i <= times; i++){
        int n , r;
        cout << "Enter the value of n :-" << endl;
        cin >> n;

        cout << "Enter the value of r :-" << endl;
        cin >> r;

        cout << "The Answer is :- " << nCr(n , r) << endl;
        cout << endl;
    }
    
}