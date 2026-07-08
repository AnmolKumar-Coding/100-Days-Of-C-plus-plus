#include <iostream>
using namespace std;


void PassByValue(int n ) {
    n++;
    cout << "n is " << n <<endl;

}

int main() {

    int n;                            
    cin >> n;

    PassByValue(n);

    cout<<"number n is "<< n << endl;


    return 0;
}

//1)  in line 14 we will be giving the value of n.
//2)  in line 16 the function call happens.
//3)  then the line goes to PassByValue and a clone of n is created there.
//4)  in line 6 there is n++ which increases the value of n by 1.
//5)  then in line 7 the n is print lets assume we have given n the value 7 so it increases to 8 and then print 8.
//6)  after that the the function comes to line 18 where the n print as 7.
//7)  it happens because both have different n. in line 16 we said to call the function usig PassByValue(n).. the there a clone of n creates in PassByValue function which is only for PassByvalue and the n in main didnt go there so there will be no changing in n in main.
