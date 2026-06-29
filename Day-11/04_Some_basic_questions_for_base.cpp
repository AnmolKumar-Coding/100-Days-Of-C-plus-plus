#include <iostream>
using namespace std;

int main(){

//1)

    int a1, b1 = 1;
    a1 = 10;

    if(++a1){
        cout << b1;
    }
    else {
        cout << ++b1;
    }
    cout << endl;

//2

    int a2 = 1;
    int b2 = 2;

    if(a2-- > 0 && ++b2 > 2){

        cout << "Stage1 - Inside If ";

    }
    else{

        cout << "Stage2 - Inside else ";

    }
    cout << a2 << " " << b2 << endl;

//3

    int a3 = 1;
    int b3 = 2;

    if(a3-- > 0 || ++b3 > 2){

        cout << "Stage1 - Inside If ";

    }
    else{

        cout << "Stage2 - Inside else ";

    }
    cout << a3 << " " << b3 << endl;

//4

    int number = 3;
    cout << (25 * (++number) ) << endl;

//5 

    int a5 = 1;
    int b5 = a5++;
    int c5 = ++a5;

    cout << b5 << "" << c5 << endl;
}