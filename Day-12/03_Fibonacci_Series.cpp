#include <iostream>
using namespace std;

//1 first i made it and its working....  :)
int main(){

    int n;

    cout << "enter the value of n :- " << endl;
    cin >> n;

    cout << "0 1 ";

    for(int a = 0, b = 1, i = 1, sum = 0; i<=n;  a=b, b=sum, i++ ){

        sum = a + b;
        cout << sum << " ";

    }
    cout << endl;

//2 like solved after watching the explanation.

    int n1;

    cout << "Enter the value of n1 :- " << endl;
    cin >> n1;

    int a1 = 0;
    int b1 = 1;

    cout << a1 << " " << b1 << " ";

    for(int i1 = 1; i1<=n1; i1++){
        int sum1 = a1 + b1;
        cout << sum1 <<" ";

        a1 = b1;
        b1 = sum1;
    }
}