#include <iostream>
using namespace std;


int main(){

//1(output - 0,2,4)

    for(int i = 0; i <= 5; i++){
        cout << i << " ";
        i++;
        cout << endl;
    }
/*
//2(output - infinite loop of 0)

    for(int i = 0; i <= 5; i--){
        cout << i << " ";
        i++;
    }
*/
//3

    for(int i = 0; i <= 15; i += 2){
        cout <<i << " ";

        if( i&1){
            continue;
        }

        i++;

    }

//4

    for(int i=0; i <5; i++){
        for(int j=1; j<=5;j++){
            cout << i << " " << j << endl;
        }
    }

//5

    for(int i = 0; i<5; i++){
        for(int j = i; j<=5; j++){
            if(i+j == 10){
                break;
            }
            cout << i << " " << j  << endl;

        }
    }
}