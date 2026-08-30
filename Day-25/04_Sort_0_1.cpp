#include <iostream>
#include <utility> // Included for std::swap

using namespace std;

// Function to take input from the user and fill the array
void Elements(int arr[], int size){
    cout << endl;
    for(int i = 0; i < size; i++){
        cout << "Enter the " << i + 1 << " element of the array :- ";
        cin >> arr[i]; // Store user input into the array
    }
    cout << endl << endl;
}

// Function to print all the elements of the array
void PrintArray(int arr[], int size){
    cout << "Printing the array:- " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // Print each element followed by a space
    }
    cout << endl;
}

// Function implementing the Two-Pointer Method to sort 0s and 1s
void sort1_0(int arr[], int size){

    // Initialize two pointers: 
    // 'left' starts at the beginning (index 0)
    // 'right' starts at the end (index size - 1)
    // The loop runs as long as the left pointer is to the left of the right pointer
    for(int left = 0, right = size - 1; left < right ; ){

        // 1. Move 'left' pointer to the right as long as it encounters 0s.
        // We also check 'left < right' to make sure the pointer doesn't cross over or go out of bounds.
        while(arr[left] == 0 && left < right){
            left++; // 0 is in the correct place (left side), so just move forward
        }

        // 2. Move 'right' pointer to the left as long as it encounters 1s.
        // We also check 'left < right' to prevent out-of-bounds errors.
        while(arr[right] == 1 && left < right){
            right--; // 1 is in the correct place (right side), so just move backward
        }

        // 3. When both while loops stop, it means:
        // - 'left' is sitting on a '1' (which belongs on the right)
        // - 'right' is sitting on a '0' (which belongs on the left)
        // If they haven't crossed each other yet, we have found a misplaced pair.
        if(arr[left] == 1 && arr[right] == 0 && left < right){
            
            swap(arr[left], arr[right]); // Swap them so 0 goes to left and 1 goes to right
            
            // After swapping, both elements are now in their correct positions.
            // Move both pointers inward to process the rest of the array.
            right--; 
            left++;
        }
    }
}

int main(){
    // Allocate a fixed memory bucket for up to 10,000 integers
    int arr[10000];
    int size;

    cout << "Enter the size of the array :-  ";
    cin >> size; // Take array size from user

    // Step 1: Populate the array
    Elements(arr, size);
    
    // Step 2: Sort the array using Two-Pointer logic
    sort1_0(arr, size);
    
    // Step 3: Display the sorted array
    PrintArray(arr, size);
    
    return 0; // Indicate successful program execution
}
