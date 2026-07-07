#include <iostream>
using namespace std;

int main(){
    
    int money;
    cout << "Enter the amount of money you have" << endl;
    cin >> money;

    switch(1){
        case 1 : cout << "The amount of 100 rs notes is :- " << money/100 << endl;
        money %=100;

        case 2 : cout << "The amount of 50 rs notes is :- " << money/50 << endl;
        money %=50;

        case 3 : cout << "The amount of 10 rs notes is :- " << money/10 << endl;
        money %=10;

        case 4 : cout << "The amount of 1 rs notes is :- " << money << endl;

    }
}