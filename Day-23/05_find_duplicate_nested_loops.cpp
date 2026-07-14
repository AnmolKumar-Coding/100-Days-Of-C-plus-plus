/*
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.
*/

#include <iostream>
using namespace std;

int sol(int arr[], int size){

    // Safety check: If the size is 1, it's impossible to have a duplicate from 1 to N-1.
    if(size == 1){
        return INT_MIN;
    }

    // Outer loop picks a number to check.
    for(int i = 0; i < size; i++){

        // Inner loop ONLY looks backward at the numbers we already passed (a < i).
        // This prevents comparing a number with itself and avoids double-checking pairs.
        for(int a = 0; a < i; a++){

            // If a previous number matches our current number, we found the duplicate!.
            if(arr[i] == arr[a]){
                return arr[i];       // Return it immediately to save time
            }
        }
    }
    return INT_MIN;

}

int main(){

    int array[10000];
    int N;
    cout << "Enter the N of the array :- " << endl;
    cin >> N;

    for(int i = 0; i < N; i++){

        cout << "Enter " << i + 1 << "st value of array :-" << endl;
        cin >> array[i];

    }

    int result = sol(array , N);

    if(result == INT_MIN){
        
        cout << "The size of the array is 1 so there can be no duplicate numbers in it. " << endl;
    }
    else{
        cout << "The duplicated number in the array is :- " << result << endl;
    }

}
