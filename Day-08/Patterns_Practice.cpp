#include <iostream>
using namespace std;


int main(){


//🟩 Phase 1: Square & Rectangle Grid Practice

//Question 1: The Constant Column Grid (Print a grid where every row counts from 1 to n.)

    int n;

    cout << "Enter the value of n " << endl;
    cin >> n ;

    int i = 1;

    cout << "The pattern is :- " << endl;

    while (i <=n){

        int j = 1;

        while(j<=n){

            cout << j << " ";

            j = j + 1;

        }

        cout << endl;
        i = i + 1;
    }

//Question 2: The Reverse Column Grid(Print a grid where every row counts backwards from n down to 1.)

    int n1;

    cout << " Enter the value of n1" << endl;
    cin>> n1;

    int i1 = 1;

    cout << "The pattern is :- " << endl;

    while(i1<=n1){

        int j1 = 1;

        while(j1<=n1){

            int s1 = n1 - j1 + 1;

            cout << s1 << " ";

            j1 = j1 + 1;

        }
        i1 = i1 + 1;
        cout << endl;
    }   

//Question 3: Continuous Counting Square(Print an n × n matrix with numbers increasing sequentially from 1 to n².)

    int n3;

    cout << "Enter the value of n3" << endl;
    cin >> n3;

    int i3 = 1;
    int s3 = 1;

    cout << "The pattern is :- " << endl;

    while (i3 <= n3){
        
        int j3 = 1;

        while(j3 <= n3){
            
            cout << s3 << " ";

            s3 = s3 + 1;

            j3 = j3 + 1;
        
        }

        i3 = i3 + 1;

        cout << endl;

    }


//Question 4: Write a program that takes an integer \(N\) as input and prints an \(N \times N\) matrix containing numbers from \(N^{2}\) down to 1 in descending order.

    int n4;

    cout << " Enter the value of n4 :-" << endl;
    cin >> n4;

    int i4 = 1;

    int s4 = n4 * n4;

    cout << "The pattern is :- " << endl;

    while(i4 <= n4){

        int j4 = 1;

        while (j4 <=n4){

            cout << s4 << " ";

            j4 = j4 + 1;

            s4 = s4 - 1;

        }

        i4 = i4 + 1;
        cout << endl;
    }


//🔺 Phase 2: Basic Right-Angled Triangles

//Question 5: Simple Star Triangle(Print a classic lower-left triangle using asterisks.)

    int n5;

    cout << "Enter the value of n5 " << endl;
    cin >> n5;

    int i5 = 1;

    cout << "The pattern is :- " << endl;

    while (i5 <= n5){
        int j5 = 1;

        while(j5 <= i5){

            cout << " * ";

            j5 = j5 + 1;

        }

        i5 = i5 + 1;
        cout << endl;
    }


//Question 6: Row Number Triangle(Print a lower-left triangle where each row contains its own row index number.)

    int n6;

    cout << "Enter the value of n6 :-" << endl;
    cin >> n6;

    int i6 = 1;

    cout << "The pattern is :- " << endl;

    while (i6 <= n6){

        int j6 = 1;

        while(j6 <= i6){

            cout << i6 << " ";

            j6 = j6 + 1;

        }

        i6 = i6 + 1;
        cout << endl;
    }


//Question 7: Column Number Triangle (Print a triangle where each row counts up from 1 to the current row index.)

    int n7;

    cout << " Enter the value of n7 :- " << endl;
    cin >> n7;

    int i7 = 1;
    
    while (i7 <= n7){
        
        int j7 = 1;

        while(j7 <= i7){
            cout << j7 << " ";

            j7 = j7 + 1;

        }

        cout << endl;
        i7 = i7 + 1;
    }


//Question 8: Continuous Incremental Triangle (Floyd's) (Print a right-angled triangle with globally increasing numbers.)

    int n8;

    cout << "Enter the value of n8 :- " << endl;
    cin >> n8;

    int i8 = 1;

    int s8 = 1;

    cout << "The pattern is :- " << endl;


    while ( i8 <= n8){

        int j8 = 1;

        while (j8 <= i8){

            cout << s8 << " ";

            j8 = j8 + 1;

            s8 = s8 + 1;

        }

        i8 = i8 + 1;
        cout << endl;

    }


//Question 9: Reverse Counting Triangle (Print each row starting from its row number and counting down to 1.)

    int n9;

    cout << "Enter the value of n9" << endl;
    cin >> n9;

    int i9 = 1;

    cout << "The pattern is :-" << endl;

    while(i9 <= n9){

        int j9 = 1;

        while ( j9 <= i9){

            cout << i9 - j9 +1 << " " ;

            j9 = j9 + 1;

        }

        cout << endl;
        i9 = i9 + 1;
    }



//Question 10: Row-Relative Value Triangle (Start each row with its own row index, then increment across columns.)

    int n10;

    cout << "Enter the value of n10" << endl;
    cin >> n10;

    int i10 = 1;

    cout << "the pattern is :- " << endl;

    while (i10 <= n10){

        int j10 = 1;

        while ( j10 <= i10){

            cout << i10 + j10 - 1 << " ";

            j10 = j10 + 1;

        }
        cout << endl;

        i10 = i10 + 1;

    }
}



