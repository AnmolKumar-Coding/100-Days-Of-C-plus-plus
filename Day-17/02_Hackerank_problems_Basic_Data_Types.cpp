// in thsi i have learned  (#include <iomanip>) which help us presize the decimal values of float and double.
//assuming a float f, and i want it to be of print with 3 decimals then i use (cout << fixed << setprecision(3) <<  f << endl;).

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    int a;
    cin >> a;
    
    cout << a << endl;
    
    long long int b;
    cin >> b;
    
    cout << b << endl;
    
    char ch;
    cin >> ch;
    
    cout << ch << endl;
    
    float f;
    cin >> f;
    
    cout << fixed << setprecision(3) <<  f << endl;
    
    double d;
    cin >>d;
    
    cout << fixed << setprecision(9) << d << endl;
     
    return 0;
}
