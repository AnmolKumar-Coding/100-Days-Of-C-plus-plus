#include <iostream>
#include <utility>
using namespace std;

// Function to print the array elements out to the console.
void printreversearray(int arr[] , int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

// Function to reverse the array by swapping elements from both ends.
void reversearray(int arr[] , int size){

    // Track the first index and the last index of the array.
    int start = 0;
    int end = size - 1;

    // The first part of the loop is blank because start and end are already set.
    // The loop keeps running until our index variables meet or cross in the middle.
    for ( ; start <= end ; start++, end--){
        
        // Swaps the values at the start index and the end index.
        swap(arr[start], arr[end]);
    }
}

int main(){

    int size;
    cout << "Enter the size of the array :- " << endl;
    cin >> size;
    cout << endl;

    int array[10000];

    for(int i = 0; i < size; i++){
        cout << "Enter the " << i + 1 << " value of array :- " << endl;
        cin >> array[i];
        cout << endl;
    }

    reversearray(array, size);
    
    printreversearray(array,size);

}