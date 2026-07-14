#include <iostream>
using namespace std;

// Function to print the array elements out to the screen.
void printarray (int array[], int size){

    for(int i = 0; i < size; i++){

        cout << array[i] << " ";

    }
}

// Function to swap neighboring elements in pairs.
void reversearray(int array[], int size){

    // Jump by 2 every time (i += 2) to move to the next pair of numbers.
    // 'size - 1' ensures we don't try to swap the last element if the array size is odd.
    for(int i = 0; i < size - 1; i += 2){

        // Swap the current element with the one right next to it.
        swap(array[i], array[i+1]);

    }
}

int main(){

    int array[10000];

    cout << "Enter the size of the array :- " << endl;
    int size;
    cin >> size;
    cout << endl;

    for(int i = 0; i < size; i++){

        cout << "Enter the " << i + 1 << "st value :-" << endl;
        cin >> array[i];
        cout << endl;
    }

    reversearray(array, size);

    printarray(array, size);

}
