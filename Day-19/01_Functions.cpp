#include <iostream>
using namespace std;

//making a function of power so we dont have to add loops again and again with different variables in each cases.

int power(){

    int a , b;

    cout << "Enter the base number" << endl;
    cin >> a;
 
    cout << "enter the power" << endl;
    cin >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++){

        ans = ans * a;
    }
    return ans;
}

int main() {

    int ans1 = power();                                         // here we store the power() value in ans.
    cout << "The answer is :- " << ans1 << endl << endl;

    int ans2 = power();
    cout << "The answer is :- " << ans2 << endl << endl;

    int ans3 = power();
    cout << "The answer is :- " << ans3 << endl << endl;

}