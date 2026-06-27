//🔠 Phase 3: Character Grids (Shown as Alphabets)

#include <iostream>
using namespace std;

int main(){

//Question 1: Constant Row Characters (Fill an n × n grid where each row prints a single character sequentially ('A', 'B', etc.).)

    int n;

    cout << "Enter the value of n :-" << endl;
    cin >> n;

    cout << "The pattern is :-" << endl;

    int i = 1;

    while ( i <= n){
        int j = 1;

        while (j <= n){
            cout << (char)('A' + i - 1) << " " ;

            j = j + 1;

        }

        i = i + 1;
        cout << endl;
    }


//Question 2: Constant Column Characters (Fill a grid where each column maintains a consistent alphabet index.)

    int n2;

    cout << "Enter the value of n2 :-" << endl;
    cin >> n2;

    int i2 = 1;

    cout << "The pattern is :-" << endl;

    while( i2 <= n2){

        int j2 = 1;

        while (j2 <= n2){
            cout << (char)('A' + j2 - 1) << " ";
            j2 = j2 + 1;

        }
        i2 = i2 + 1;
        cout << endl;
    }


// Question 3: Continuous Alphabet Matrix (Increment characters globally from 'A' across a square grid.)

    int n3;

    cout << "Ether the value of n3" << endl;
    cin >> n3;

    cout << "The pattern is :- " <<endl;

    int i3 = 1;
    int s3 = 1;

    while (i3 <= n3){

        int j3 = 1;

        while(j3 <= n3){

            cout << (char)('A' + s3 - 1) << " ";

            j3 = j3 + 1;

            s3 = s3 + 1;

        }
        i3 = i3 + 1;

        cout << endl;
    }


//Question 4: Shifted Character Matrix (Print a matrix where each row sequence is offset by its row index.)

    int n4;

    cout << "Enter the value of n4" << endl;
    cin >> n4;

    cout << "The pattern is :- " << endl;

    int i4 = 1;

    while(i4 <= n4){

        int j4 = 1;

        while( j4 <= n4){

            cout << (char)('A' + i4 + j4 -2) << " ";

            j4 = j4 + 1;

        }

        cout << endl;
        i4 = i4 + 1;
    }


//Question 5: Constant Row Character Triangle (Print characters matching the current row number in a triangular layout.)

    int n5;

    cout << "Enter the value of i5" << endl;
    cin >> n5;

    cout << "The pattern is :-" << endl;

    int i5 = 1;

    while(i5 <= n5){

        int j5 = 1;

        while (j5 <= i5){

            cout << (char)('A' + i5 - 1) << " ";

            j5 = j5 + 1;

        }

        cout << endl;
        i5 = i5 + 1;
    }


//Question 6: Continuous Alphabet Triangle (Print sequentially increasing characters across a triangular layout.)

    int n6;

    cout <<"Enter the value of n6 :- " << endl;
    cin >> n6;

    cout << "The pattern is :-" << endl;

    int i6 = 1;
    int s6 = 1;

    while ( i6 <= n6){
        int j6 = 1;

        while(j6 <= i6){

            cout << (char)('A' + s6 - 1) << " ";

            j6 = j6 + 1;
            s6 = s6 + 1;
        }
        cout << endl;
        i6 = i6 + 1;

    }


//Question 7: Dynamic Shifted Character Triangle (Create an increasing character triangle offset by the row start value.)

    int n7;

    cout << "Enter the value of n7" << endl;
    cin >> n7;

    cout << "The pattern is :- " << endl;

    int i7 = 1;

    while (i7 <= n7){

        int j7 = 1;

        while(j7 <= i7){

            cout << (char)('A' + i7 + j7 -2) << " " ;

            j7 = j7 + 1;

        }

        cout << endl;
        i7 = i7 + 1;
    }


//Question 8: Reverse Starting Character Triangle (Count down the alphabet to find the row base, then print upwards.)

    int n8;

    cout << "Enter the value of n8 :- " << endl;
    cin >> n8;

    cout << "THe pattern is :- " << endl;

    int i8 = 1;

    while(i8 <= n8){

        int j8 = 1;

        while ( j8 <= i8) {

            cout << (char)('A' + n8 +j8 -i8 -1) << " ";

            j8 = j8 + 1;

        }
        cout << endl;
        i8 = i8 + 1;

    }


//🔄 Phase 4: Spaces, Inversions, and Alignments

//Question 9: Right-Aligned Star TrianglePrint a right-angled triangle aligned to the right margin using leading spaces.


    int n9;

    cout << "Enter the value of n9" << endl;
    cin >> n9;

    cout << "The pattern is :-" << endl;

    int i9 = 1;

    while (i9 <= n9){
        int j9 = 1;
        int space = 1;

        while(space<= n9 -i9){
            cout << " " << " ";
            space = space + 1;
        }
        while(j9 <= i9){
            cout << "*" << " ";
            j9 = j9 + 1;
        }

        cout << endl;
        i9 = i9 + 1;
    }


//Question 10: Inverted Left Star Triangle (Print a traditional inverted triangle starting broad and narrowing down to 1.)

    int n10;

    cout << "Enter the value of n10" << endl;
    cin >> n10;

    cout << "The pattern is :-" << endl;

    int i10 = 1;

    while ( i10 <= n10){
        
        int j10 = 1;

        while (j10 <= n10 - i10 + 1){

            cout << "*" << " ";

            j10 = j10 + 1;
        }

        cout << endl;
        i10 = i10 + 1;

    }


//Question 11: Inverted Right-Aligned Star Triangle (Print a right-aligned inverted star triangle using spaces.)
    int n11;

    cout << "Enter the value of n11 :- " << endl;
    cin >> n11;

    int i11 = 1;

    cout << "The pattern is :- " << endl;

    while(i11 <= n11){
        int j11 = 1;
        int s11 = 1;

        while(s11 <= n11 + i11 - 5){
            cout << " " << " ";
            s11 = s11 + 1;

        }
        while(j11 <= n11 - i11 + 1){

            cout << "*" << " ";
            j11 = j11 + 1;
        }
        cout << endl;
        i11 = i11 + 1;
    }


//Question 12: Inverted Right-Aligned Number Triangle (Print row numbers in a right-aligned inverted triangular block.)

    int n12;

    cout << "Enter the value of n12 :- " << endl;
    cin >> n12;

    cout << "The pattern is :- " << endl;

    int i12 = 1;
    int a12 = 1;
    
    while(i12 <= n12){

        int j12 = 1;
        int s12 = 1;

        while(s12 < i12){

            cout << " " << " ";

            s12 = s12 + 1;

        }
        while(j12 <= n12 - i12 + 1){

            cout << a12 << " ";

            j12 = j12 + 1;

        }
        cout << endl;
        i12 = i12 + 1;
        a12 = a12 + 1;
    }


//Question 13: Right-Aligned Row-Value Triangle (Print row values in an upward-climbing, right-aligned triangle.)

    int n13;

    cout << "Enter the value of n13" << endl;
    cin >> n13;

    int i13 = 1;
    int a13 = 1;

    while ( i13 <= n13){
        int j13 = 1;
        int s13 = 1;

        while (s13 <= n13 - i13){
            cout << " " << " ";
            s13 = s13 + 1;
        }
        while (j13 <= i13){
            cout << a13 << " ";
            j13 = j13 + 1;

        }
        cout << endl;
        i13 = i13 + 1;
        a13 = a13 + 1;
    }


//Question 14: Right-Aligned Continuous Number Triangle (Print a right-aligned triangle where numbers increase continuously across all rows, padded by leading spaces.)

    int n14;

    cout << "Enter the value of n14 :- " << endl;
    cin >> n14;

    cout << "The pattern is :-" << endl;

    int i14 = 1;
    int a14 = 1;

    while ( i14 <= n14){

        int j14 = 1;
        int s14 = 1;

        while ( s14 <= n14 - i14){

            cout << " " << " ";
            s14 = s14 + 1;

        }
        while ( j14 <= i14){

            cout << a14 << " ";
            j14 = j14 + 1;
            a14 = a14 + 1;
        }

        cout << endl;
       
        i14 = i14 + 1;

    }

}





