#include <iostream>
using namespace std;

// 1 --> even
// 2 --> odd
bool isEven(int a){

    if(a&1== 1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int num;
    cout << "Enter the number :- " << endl;
    cin >> num;

    if(isEven(num)){

        cout << "The number is Even." << endl;

    }
    else {
        cout << "The numebr is Odd" << endl;
    }
    cout << endl;


}