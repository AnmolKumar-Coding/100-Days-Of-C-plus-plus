#include <iostream>
using namespace std;

void CallFunction(int n){

    cout << "Value of copy n in CallFunction before changing :-  " << n << endl << endl;

    n += 100;

    cout << "Value of copy n in CallFunction after changing :-  " << n << endl << endl;

}

int main(){

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << endl;

    cout << "Value of real n before the function call :-  " << n << endl << endl;

    CallFunction(n);

    cout << "Value of real n after the function call :-  " << n << endl << endl;

}