#include <iostream>
using namespace std;

// Function to look for a number in the array.
bool search(int array[] , int size, int num){

    // Check each box in the array from start to end.
    for(int i = 0; i < size; i++){

        // If the number in the box matches our target number.
        if(array[i] == num){
            return 1;           //Stop searching and say "yes" (true)(1).
        }
   }
   return 0; // If the loop finishes without finding it, say "no" (false)(0).
    
}

int main(){

    // A list of 10 hardcoded numbers to search through.
    int array[10]{1,23,32,-232,-3,0,122,-34,100,-1};

    int num;
    cout << "Enter the number to check if it is inside the array :- " << endl;
    cin >> num;                 // Store the number the user is looking for

    cout << endl;
    cout << "Processing -------" << endl;
    cout << endl;

    // Call the function. If it gives back true, print present.
    if(search(array , 10 , num)){
        cout << num << " is present inside the array." << endl;
    }

    // If the function gives back false, print not present.
    else{
        cout << num << " is not present inside the array." << endl;
    }
}