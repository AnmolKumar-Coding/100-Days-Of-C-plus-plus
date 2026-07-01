#include <iostream>
using namespace std;

//1) write numbers from 1 to n whith forloop( There are three cases.)

int main(){

//a)

    int n1a;
    cout << "Enter the value of n1a" << endl;
    cin>> n1a;
    
    cout << "The numbers from 1 to n1a is :-" << endl;
    for(int i1a = 1; i1a <= n1a ; i1a++ ){
        cout << i1a << endl;
    }
    cout << endl;

//b
/*
//in the b question there is no stop for the forloop so it is kept going.(so we need to stop it)
    int n2b;

    cout << "enter the value of n2b" << endl;
    cin >> n2b;

    cout << "The numbers from 1 to n2b is :-" << endl;

    int i2b = 1;

    for(;;){
        
        if(i2b <= n2b){
            cout << i2b << endl;
        }
        i2b++;
    }
*/

//c)

//i leraned break(which breaks the loop).
    int n3c;

    cout << "Enter the value of n3c :-" << endl;
    cin >> n3c;

    cout << "The numbers from 1 to " << n3c << " is :- " << endl;

    int i3c = 1;

    for (;;){
        
        if(i3c <= n3c){
            cout << i3c << endl;
        }
        else{
            break;
        }
        i3c++;
    }
    cout << endl;


//2) we can write multiple variables.

    for(int a=5, b= 6, c= 7; a>= 0 && b>=0 && c>=0 ; a--,b--,c--){
        cout << a << " " << b << " " << c << endl;
    }
    cout << endl;
    
}