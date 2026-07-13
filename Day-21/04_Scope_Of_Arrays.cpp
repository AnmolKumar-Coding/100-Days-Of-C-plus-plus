#include <iostream>
using namespace std;


// CRITICAL CONCEPT: When you pass an array into a function, C++ passes its memory address.
// The function does NOT make a copy; it works directly on the original array.
void function(int arr[], int size){

    cout << "Updating the value 0 index of arary inside the function :-" << endl << endl;
    // This permanently changes the 0th box of the original 'array' in main() to 122
    arr[0] = 122;

    cout << "Printing the value of arrays inside function after update :- " << endl;

    for(int i = 0; i < 4; i++){

        cout << arr[i] << " ";

    }
    cout << endl << endl;


}

int main(){

    // Create an array with initial values: {1, 2, 3, 4}
    int array[4]{1,2,3,4};

    cout << "Printing the array before it is passed to function :- " << endl;

    for(int i = 0; i < 4; i++){

        cout << array[i] << " ";
    }
    cout << endl << endl;

    cout << "Function call" << endl << endl;
    
    // Passing the array here allows 'function' to modify the original elements directly
    function( array , 4);

    cout << "After returning to the main printing the value of arrays :- "  << endl;

    // Output check: You will see the first number is now 122, not 1!
    for(int i = 0; i < 4; i++){

        cout << array[i] << " ";
    }
    cout << endl << endl;
}