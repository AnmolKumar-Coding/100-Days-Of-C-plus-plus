#include <iostream>
using namespace std;

//Given an integer n, print a solid square pattern of n rows and n columns using stars (*).

int main(){

    int n;

    cout << "Enter the value of n :-" << endl;
    cin >> n;

    cout << "The Pattern is :- " << endl;

    int i = 1;

    while(i<=n){

        int j = 1;

        while(j<=n){
            
            cout << " * ";

            j = j + 1;

        }

        cout << endl;

        i = i + 1;

    }

//Given an integer a, print a square pattern of a rows and a columns where every element in the b-th row is equal to the row index i.


    int n1;

    cout << " Enter the value of n1 :- " << endl;
    cin >> n1;

    cout << "The Pattern is :- " << endl;
    int a = 1;

    while(a <= n1){

        int b = 1;

        while(b <= n1){
            cout << a << " " ;

            b = b + 1;
        }
        
        cout << endl;
        a = a + 1;
    }

// Some experiment Done by me.

    int n2;

    cout << "Enter the value of n2 :- " << endl;
    cin >> n2;

    int i1 = 1;

    while (i1 <= n2){
        int j1 = 1;
        
        while(j1<=i1){

            cout << " * ";

            j1 = j1 + 1;
 
        }

        cout << endl;

        i1 = i1 + 1;
    }


    int n3;

    cout << "Enter the value of n3 :- " << endl;
    cin >> n3;

    int i2 = 1;

    while (i2 <= n3){
        int j2 = i2;
        
        while(j2<=n3){

            cout << " * ";

            j2 = j2 + 1;
 
        }

        cout << endl;

        i2 = i2 + 1;
    }
}

