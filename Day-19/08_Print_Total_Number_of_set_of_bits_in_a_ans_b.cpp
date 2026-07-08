#include <iostream>
using namespace std;

int SetBits(int n){

    int ans = 0;
    
    while(n){

        n = n & (n-1);
        ans ++;
    }
    return ans;
}

int setsBitsAplusB(int n, int r){

    int ans = SetBits(n) + SetBits(r);

    return ans;
}

int main(){

    int times;
    cout << "Enter how many times you want to execute the command :-" << endl;
    cin >> times;

    cout << endl;

    for(int i = 1; i <=times; i++){

        int a , b;
        cout << "Enter the value of a:-" << endl;
        cin >> a;

        cout << "Enter the value of b :-" << endl;
        cin >> b;

        cout << endl;

        cout << "Total number of sets of bits in a and b is :-" << " " << setsBitsAplusB( a, b) << endl;
        cout << endl;
        
    }
}