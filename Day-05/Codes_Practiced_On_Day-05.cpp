#include <iostream>
using namespace std;

// Find a + b ?

int main(){

    int a;
    int b;

    cout << "input value of a" << endl;
    cin >> a;

    cout << "input value of b" << endl;
    cin >> b;

    cout << "the sum of a + b is :" << a + b << endl;



// Find The Simple Intrest.

    double P;
    double R;
    double T;

    cout << "input value of P" << endl;
    cin >> P;

    cout << "input value of R" << endl;
    cin >> R;

    cout << "input value of T" << endl;
    cin >> T;

    cout << "The Simple Intrest will be :" << (P*R*T)/100 << endl; 



// WHich is greather c or d?

    int c;
    int d;
    
    cout << "Input Value of c : " << endl;
    cin >> c;

    cout << "Input Value of d : " << endl;
    cin>>d;

    if(c>d){
        cout << "C is greather than D" << endl;
    }
    else {
         cout << "D is greather than C" << endl;
    }



// Is "n" an even number?



    int n;

    cout << "Enter the value of n : " << endl;
    cin>>n;

    int S = n % 2;

    if (S==0){
        cout << "n is an even number" << endl;
    }

    else{
        cout << "n is not an even number" << endl;
    }


// Find if n1 is a positive, negative or zero?


    int n1;

    cout << "input the value of n1" << endl;
    cin >> n1;

    if(n1>0){
        cout << "n1 is a positive number" << endl;
    }
    
    else if (n1<0){
        cout << "n1 is a negative number" << endl;
    }
    else{
        cout << "n1 is zero" << endl;
    }


// Is this a triangle?

    double a1;
    double b1;
    double c1;

    cout << "Input the value of a1 :" << endl;
    cin >> a1;

    cout << "Input the value of b1 :" << endl;
    cin >> b1;

    cout << "Input the value of c1 :" << endl;
    cin >> c1;

    double X = a1 + b1;
    double Y = a1 + c1;
    double Z = b1 + c1;

    if ((X > c1) && (Y > b1) && (Z > a1)){

        cout << "This is a triangle" << endl;

    }
    else {
        cout << " This is not an Triangle" << endl;
    }



// Make numbers go from 1 to n2.

    int n2 ;

    int s = 1;

    cout<< "Input the values of n2 :- " << endl;
    cin >> n2;

    cout << "this is the numbers from 1 to " << n2 << " :- " << endl;

    while( s <= n2 ){
        
        cout << s << endl;
        
        s = s + 1;
        
    }



// Print even numbers between 1 to N

    int N;

    int S1 = 2;

    cout << "enter the value of N :- " << endl;
    cin >> N;

    cout << "the even numbers between 1 to " << N << "are" << endl;

    while (S1<N){
        cout << S1 << endl;

        S1 = S1 + 2;
    }

}

// Some Codes are in rough page in my copy as i have to analyse it and make sure they run.


