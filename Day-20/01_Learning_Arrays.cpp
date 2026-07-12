#include <iostream>
using namespace std;

int main (){

    int first[10];                       // this is the declarion of arrays.
    cout << first[0] << endl << endl;    // since no value is stored in the array so random values;

    int second[3]{1,5,4};               //    //we initialised the array 

    // To access the FIRST value (Index 0)
    cout << "Value at 0 index :-  " <<  second[0] << endl ;        // accesing an element inside the array
    cout << "Value at 1 index :-  " << second[1] << endl ;         // values inside an arrays is stored in Index. and the first value is stored in index 0, and last value is stores in the (full size of array - 1), and to access that value we write the array name in int array_name [here the index in which the value is stored.]

    // To access the last value (Index 2)
    cout << "Value at 2 index :- " << second[2] << endl ;

    int third [100]{0};                 // initialsing all values of arrays as 0
    cout << "Value at 67 index :- " << third[67] << endl;


    //initialising all locations with 1 [not possible with below line]
    int fourth[10] = {1};
    cout << "Value at 0 index :- " << fourth[0] << endl;
    cout << "Value at 2 index :- " << fourth[3] << endl;

    //arrays can be used in to store any data type.
    //You cannot mix types. An int array can only hold integers. You cannot sneak a char or a float inside it.

    char ch[5]{'a', 'b' , 'c', 'd', 'e'};
    cout << "Value at 0 index :- " << ch[0] << endl;
    cout << "Value at 3 index :- " << ch[3] << endl;
    cout << "Value at 5 index :- " << ch[4] << endl;

    float f[3]{1.23, 3.123, 123.122};
    cout << "Value at 1 index :- " << f[1] << endl;
    cout << "Value at 2 index :- " << f[2] << endl;

    double d[1]{1.2121};
    cout << "Value at 0 index :- "  << d[0] << endl;
}