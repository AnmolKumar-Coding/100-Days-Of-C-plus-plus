#include <iostream>
using namespace std;

// This function takes an array and its size, then prints all its numbers.
void arrays(int arr[] ,int  size){

    cout << "Printing the array :- " << endl;

    // This loop starts at 0 and goes through every index in the array.
    for(int i = 0 ; i < size; i++){
        cout << arr[i] << " ";          // Prints the value inside the current index.
    }
    cout << endl << endl;
    cout << "Printing done " << endl;

}


int main(){

    // Creates a large storage space with 1000 empty boxes for integers.
    int array[1000];

    int size ;
    cout << "Enter the size of the array :- " << endl;
    cin >> size;
    cout << endl;

    // This loop asks the user for values, one by one, up to the chosen size.
    for(int i = 0; i < size ; i++){
        cout << "Enter the" << " " << (i + 1) << "st value :- " << endl;
        cin >> array[i];
    }

    //The function call happens
    arrays(array , size);
    

}