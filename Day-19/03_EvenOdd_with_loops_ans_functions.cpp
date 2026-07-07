#include <iostream>
using namespace std;

bool isEven(int a){

    if(a&1){

        return 0;

    }

    return 1;
}

int main(){

    int times;
    cout << "Enter the times you want to check :-" << endl;
    cin >> times;

    for(int i = 1;  i <= times; i++){

        int n;
        cout << "Enter the number :- " << endl;
        cin >> n;

        if(n==0){
            cout << "it is zero" << endl;
        }

        else if (isEven(n)){
            cout << "The number is even" << endl;
        }
        else {
            cout << "The number is odd" << endl;
        }
        cout << endl;

    }
}