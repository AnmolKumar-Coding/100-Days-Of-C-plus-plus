#include <iostream>
#include <limits.h>
using namespace std;

/*
Description: 
  -This code is completely safe. It works even if duplicate numbers appear 3 times,n5 times, or any number of times. It does not care if the numbers are in pairs.
  
How it works: 
  -It takes each number one by one and manually checks the entire array to see if any other matching number exists.
*/


int unique(int array[], int size){

    // Pick a number from the array to test.
    for(int i = 0; i < size ; i++){

        // Compare the picked number against every other number in the array.
        bool isunique = true;

        // CRITICAL CHECK: Make sure we aren't comparing a number with itself (i != a).
        // And then check if the values actually match.
        for(int a = 0; a < size ; a++){
            if((i != a) && (array[i] == array[a])){
                isunique = false;       // We found a match, so it's not unique.
                break;                  // Stop checking the rest of the array for this number.
            }
        }

        // If the inner loop finished and 'isunique' is still true, we found our unique number!.
        if(isunique){
            return array[i];
        }
        
    }
    // Return a special error marker if every single number has a duplicate.(i used this beacuse if a return false then if the 0 is the unique number then it wont cout. but if the int_min is unique then i dont know what to d0.)
    return INT_MIN;

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

    // Check if the unique function returned our error marker.
    int result = unique(array, size);
    if(result == INT_MIN){
        cout << "There is no unique number" << endl;
    }
    else{
        cout << "The unique number is :- " << result;
    }
}