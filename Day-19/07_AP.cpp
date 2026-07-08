#include <iostream>
using namespace std;

int AP(int n){

    return ((3*n) + 7);

}

int main(){

    int times;
    cout << "How many times you wanna exectcute the program :-" << endl;
    cin >> times;
    cout << endl;

    for(int i = 1; i <=times ; i++){

        int n;
        cout << "Enter the value of n :-" << endl;
        cin >> n;

        cout << "The answer is :- " << AP(n) << endl;
        cout << endl;

    }
    return 0;
}