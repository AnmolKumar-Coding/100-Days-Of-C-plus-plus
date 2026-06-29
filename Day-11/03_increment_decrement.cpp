#include <iostream>
using namespace std;

int main(){

    int i = 7;

    cout << (i++) << "\n";
    //7 , i = 8,
    cout << (++i) << "\n";
    //9 
    cout << (i--) << "\n";
    //9 , i = 8
    cout << (--i) << "\n";
    //7

}