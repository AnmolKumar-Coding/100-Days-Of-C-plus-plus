#include <iostream>
#include <iomanip>          //Required for fixed and setprecision.
using namespace std;

int nearesinteger(int x){
    long long int s = 0;
    long long int e = x;
    long long int m = s + (e - s)/2;

    while(s <= e){

        if((m*m) == x){
            return m;
        }
        else if((m*m) > x){
            e = m - 1;
        }
        else{
            s = m + 1;
        }
        
        m = s + (e - s)/2;

    }
    return e;           //Returns the floor integer of the square root.
}

//this is the brute froce with O(n^2) time complexity.
long double precision(double x, int p, double x1){

    long double factor = 1;
    long double ans = x1;
    for(int i = 0; i < p; i++){

        factor = factor/10;      //Reduces increment step for each decimal place (0.1, 0.01, etc.)

        //Look-ahead condition stops calculation *before* overshooting 'x'.
        while ((ans+factor)*(ans+factor) < x){
            ans = ans + factor;
        }
    }
    return ans;

}

int main(){

    int x;
    cout << "Enter the number :-  ";
    cin >> x;

    int p;
    cout << "Enter by the precision for the decimal :-  ";
    cin >> p;

    int x1 = nearesinteger(x);
    long double p1 = precision(x,p,x1);

    //'fixed' locks formatting to decimal places; 'setprecision(p)' forces 'p' trailing digits.
    cout << "The square root of the " << x << " is :-  " << fixed << setprecision(p) << p1;

}