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
} 


// Find The Simple Intrest.

int main(){
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
}


// WHich is greather a or b?

int main(){
    int a;
    int b;
    
    cout << "Input Value of a : " << endl;
    cin >> a;

    cout << "Input Value of b : " << endl;
    cin>>b;

    if(a>b){
        cout << "A is greather than B" << endl;
    }
    else {
         cout << "B is greather than A" << endl;
    }

}


// Is "n" an even number?

int main(){

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
}


// Find if n is a positive, negative or zero?

int main(){

    int n;

    cout << "input the value of n" << endl;
    cin >> n;

    if(n>0){
        cout << "n is a positive number" << endl;
    }
    
    else if (n<0){
        cout << "n is a negative number" << endl;
    }
    else{
        cout << "n is zero" << endl;
    }
}


// Is ABC a triangle?

int main(){

    double a;
    double b;
    double c;

    cout << "Input the value of a :" << endl;
    cin >> a;

    cout << "Input the value of b :" << endl;
    cin >> b;

    cout << "Input the value of c :" << endl;
    cin >> c;

    double P = a + b;
    double Q = a + c;
    double R = b + c;

    if ((P > c) && (Q > b) && (R > a)){

        cout << "This is a triangle" << endl;

    }
    else {
        cout << " This is not an Triangle" << endl;
    }

}


// Make numbers go from 1 to n.

int main(){

    int n ;

    int s = 1;

    cout<< "Input the values of n :- " << endl;
    cin >> n;

    cout << "this is the numbers from 1 to " << n << " :- " << endl;

    while( s <= n ){
        
        cout << s << endl;
        
        s = s + 1;
        
    }

}

// Print even numbers between 1 to N

int main(){

    int N;

    int S = 2;

    cout << "enter the value of N :- " << endl;
    cin >> N;

    cout << "the even numbers between 1 to " << N << "are" << endl;

    while (S<N){
        cout << S << endl;

        S = S + 2;
    }

}

// Some Codes are in rough page in my copy as i have to analyse it and make sure they run.


