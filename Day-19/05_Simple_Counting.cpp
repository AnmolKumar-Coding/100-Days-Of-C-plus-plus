#include <iostream>
using namespace std;

//when the fiunction is written that doesnt give answer we uses void in place of int,bool,char,etc.

//Function Signature
void PrintCounting(int n){

    //Function Body
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter the value of n :- " << endl;
    cin >> n;

    cout << "the counting from 1 to " << n << " is :- " << endl;

    //Function Call
    PrintCounting(n);  

    return 0;
}
// the void function cannot be used with cout to print because it doesnt have any return answers.