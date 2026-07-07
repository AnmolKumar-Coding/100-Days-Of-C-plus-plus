#include <iostream>
using namespace std;

int main(){

    float a, b;

    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    char op;
    cout << "Enter the Operation you want to perform" << endl;
    cin >> op;

    cout << endl;

    switch (op){

        case '+' : cout << a  <<" + " <<  b <<  " = " << a + b << endl;
            break;
        case '-' : cout << a  <<" - " <<  b <<  " = " << a - b << endl;
            break;
        case '/' : cout << a  <<" / " <<  b <<  " = " << a/b << endl;
            break;
        case '*' : cout << a  <<" * " <<  b <<  " = " << a * b << endl;
            break;
        default : cout << "Enter the correct operator ( +, -, /, *) " << endl;
    }
}