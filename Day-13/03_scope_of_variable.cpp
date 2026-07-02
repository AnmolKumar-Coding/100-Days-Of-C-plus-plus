#include <iostream>
using namespace std;

//inside a block { block } we can make a varibale for the block like two different blocks can have different variable.  

int main(){

    int a = 5;
    cout << a << endl;

    if(true){
        int b = 50;
        cout << b << endl;
    }

    int b = 8;
    cout << b << endl;

    int i = 7;
    cout << i << endl;

    for(int i = 0; i <8; i++){
        cout << "hi" << endl;
    }
}