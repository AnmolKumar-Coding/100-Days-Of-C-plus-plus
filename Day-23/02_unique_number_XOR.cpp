#include <iostream>
#include <limits.h>
using namespace std;

/*

CRITICAL CONDITION FOR THIS APPROACH:
  - This XOR method ONLY works if there is exactly 1 unique number, and all other numbers appear exactly in pairs (duplicate numbers must appear exactly 2 times).
  - If a duplicate appears 3 or 5 times, this logic will fail.
  
THE RULE OF XOR:
  - Order does not matter in XOR (Commutative & Associative properties).
  - Example: a ^ b ^ a ^ c ^ b  
             = a ^ a ^ b ^ b ^ c   (Grouping the matching pairs together)
             = 0 ^ 0 ^ c           (Any number XORed with itself becomes 0)
             = 0 ^ c 
             = c                   (Any number XORed with 0 stays the same)

*/

int unique(int array[], int size){

    // Safety check: An empty array cannot have a unique number.
    if(size == 0){
        return INT_MIN;
    }
    
    // Safety check: If every duplicate is a pair, the total size MUST be an odd number.
    // If the size is even, it means a pair is missing a number or there is no unique element.
    if(size % 2 == 0){
        return INT_MIN;
    }

    int ans = 0;

    for(int i = 0; i < size ; i++){

        // XOR each element into the answer variable to cancel out the duplicate pairs.
        ans = ans^array[i];
    }
    return ans;

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

    int result = unique(array, size);
    if(result == INT_MIN){
        cout << "There is no unique number" << endl;
    }
    else{
        cout << "The unique number is :- " << result;
    }
}