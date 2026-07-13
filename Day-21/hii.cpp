#include <iostream>
using namespace std;

// Function to calculate the total sum of the array elements.
int sum(int array[], int size){

    // Initialize our running total at 0.
    int ans = 0;

    // Loop through every single number in the array.
    for(int i = 0; i < size; i++){

        // Add the current array element to our running total.
        // 'ans += array[i]' is a shorter way of writing 'ans = ans + array[i]'.
        ans += array[i];
    }
    // Return the final accumulated sum back to main()
    return ans;
}

int main(){

    int array[10000];

    cout << "Enter the size of the array :- " << endl;
    int size;
    cin >> size;    // Get the total count of numbers from the user

    // Loop to collect inputs from the user one by one
    for(int i = 0; i < size ; i++){

        cout << "Enter the " << i + 1 << "st value of array :- " << endl;
        cin >> array[i];    // Store each number at the current index.
    }

    // Call the sum function and display the result.
    cout << "The sum of array is :- " <<  sum(array, size) << endl;

}