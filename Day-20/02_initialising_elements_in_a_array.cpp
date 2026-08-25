#include <iostream>
#include <algorithm> // Best practice: explicit include for std::fill and std::fill_n
using namespace std;

int main(){

    // --- SECTION 1: Standard std::fill on a raw array ---
    int array [10];

    // Fills the entire array from index 0 up to (but not including) index 10 with 27
    fill(array, array + 10, 27);

    for(int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    cout << endl; // Output: 27 27 27 27 27 27 27 27 27 27 



    // --- SECTION 2: Standard std::fill_n using a counter ---
    int array1 [10];

    // Starts at index 0 and counts forward 10 elements, filling them with 69
    fill_n(array1, 10, 69);

    for(int i = 0; i < 10; i++){
        cout << array1[i] << " ";
    }
    cout << endl; // Output: 69 69 69 69 69 69 69 69 69 69



    // --- SECTION 3: Dynamic progressive fill ---
    int array2[10];

    for(int i = 0; i < 10; i++){
        // NOTE: array2 + i + 1 targets elements from index 0 up to index i.
        // It completely overwrites all previously filled elements on every loop iteration.
        fill(array2, array2 + i + 1, i );

        // This prints safely because index i was just filled in the line above
        cout << array2[i] << " ";
    }
    cout << endl; // Output: 0 1 2 3 4 5 6 7 8 9 



    // --- SECTION 4: Progressive fill with a value offset ---
    int array3[10];

    for(int i = 0; i < 10; i++){
        // Works exactly like array2, but fills with values starting at 100
        fill(array3, array3 + i + 1, i + 100 );

        cout << array3[i] << " ";
    }
    cout << endl; // Output: 100 101 102 103 104 105 106 107 108 109 



    // --- SECTION 5: Verifying the overwrite behavior ---
    // Printing array2 after the loops finish proves that the very last 
    // loop iteration (i = 9) overwrote the entire array with the number 9.
    for(int i = 0; i < 10; i++){
        cout << array2[i] << " ";
    }
    cout << endl; // Output: 9 9 9 9 9 9 9 9 9 9 
}
