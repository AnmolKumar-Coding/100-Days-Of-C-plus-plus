#include <iostream>
#include <limits.h>                     // Required for INT_MIN and INT_MAX
using namespace std;


// Function to find the highest number in the array.
int getmax(int arr[] ,int size){

    // Start with the lowest possible integer (~ -2 billion)(pow(2,-31))
    // This ensures the first number in the array will always be bigger
    int max = INT_MIN;              

    // Look through every single number in the array
    for(int i = 0; i < size; i++){

        // If the current number is bigger than our current max, update max
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;     // Return the final largest number found
}

//all same as maximum just changed the sigh and used INT_MIN.
int getmin(int arr[] , int size){

    int min = INT_MAX;

    for(int i = 0; i < size ; i++){

        if(arr[i] < min){

            min = arr[i];
        }
    }
    return min;
}


int main(){

    int array [10000];          // Create a memory box that can hold up to 10,000 numbers

    int size;
    cout << "Enter the size of the array :-" << endl;
    cin >> size;                // Get the total count of numbers the user wants to input

    // Loop to take inputs from the user one by one
    for(int i = 0; i <size; i++){

        //asks the user to input value one by one.
        cout << "Enter the " << i + 1 << " st value :-" << endl;
        cin >> array[i];
        cout << endl;
    }

    cout << "The minimum value of the array is :- " << getmin(array , size) << endl;        //prints the minimum value.
    cout << "The maximum value of the array is :- " << getmax(array , size) << endl;        //prints the maximum value.

}

