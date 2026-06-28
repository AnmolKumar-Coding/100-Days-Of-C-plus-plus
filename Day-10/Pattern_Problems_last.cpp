#include <iostream>
using namespace std;

int main(){

//Question 1: Full Number Pyramid / Palindrome (Print a centered pyramid counting up to the row number, then counting back down.)

    int n1 ;

    cout << "Enter the value of n1 :- " << endl;
    cin >> n1;

    cout << "The pattern is :-" << endl;

    int i1 = 1;

    while(i1 <= n1){

        int j1 = 1;
        int s1 = 1;
        int a1 = 1;

        while(s1 <= n1 - i1 ){
            cout << " " << " ";
            s1 = s1 + 1;
        }
        while(j1 <= i1){

            cout << j1 << " ";
            j1 = j1 + 1;
        }
        while(a1 < i1){
            cout << i1 - a1  << " ";
            a1 = a1 + 1;
            
        }
        cout << endl;
        i1 = i1 + 1;
    }


//Question 2: The "Dabangg" Pattern (Ultimate Challenge) (Assemble an increasing left numerical block, a central inverted star wedge, and a decreasing right numerical block.)

    int n2;

    cout << "Enter the value of n2 :-" << endl;
    cin >> n2;

    cout << "The pattern is :- " << endl;

    int i2 = 1;

    while(i2 <= n2){

        int j2 = 1;
        int s2 = 1;
        int t2 = 1;
        int u2 = 1;

        while(j2 <= n2 - i2 + 1){
            cout << j2 << " ";
            j2 = j2 + 1;
        }
        while(s2 <= i2 - 1){
            cout << "*" << " ";
            s2 = s2 + 1;
        }
        while(t2 <= i2 - 1){
            cout << "*" <<" ";
            t2 = t2 + 1;
        }
        while (u2 <= n2 - i2 + 1){
            cout << n2 - u2 - i2 + 2 << " ";
            u2 = u2 + 1;
        }
        cout << endl;
        i2 = i2 + 1;
    }
}