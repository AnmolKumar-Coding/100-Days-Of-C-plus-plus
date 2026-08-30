#include <bits/stdc++.h> 
using namespace std;

// This function implements the famous "Dutch National Flag" algorithm
// It sorts an array containing only 0s, 1s, and 2s in-place.
void sort012(int *arr, int n){

    // Define 3 pointers to divide the array into 4 zones:
    // 1. Everything before 'low' will contain only 0s.
    // 2. Everything between 'low' and 'mid-1' will contain only 1s.
    // 3. Everything between 'mid' and 'high' is unexamined/unknown.
    // 4. Everything after 'high' will contain only 2s.

    int low = 0;      // Tracks where the next '0' should be placed
    int mid = 0;      // The scanner pointer; examines elements one by one
    int high = n - 1; // Tracks where the next '2' should be placed

   // The loop runs until the scanning pointer 'mid' passes the 'high' pointer boundary
    while(mid <= high){

        // CASE 1: The current element is 0
        if(arr[mid] == 0){
            // Swap the 0 at 'mid' with whatever element is sitting at 'low'
            swap(arr[low], arr[mid]);
         
            // Expand the 0s region forward by incrementing 'low'
            low++;
         
            // Move the scanner forward. We can safely skip checking this new 'mid' element 
            // because 'low' could only have been holding a 1 (since mid already parsed it).
            mid++;
        }
      
        // CASE 2: The current element is 1
        else if(arr[mid] == 1){
            // 1 is already in its correct middle territory, so no swapping is needed.
            // Just advance the scanner to examine the next element.
            mid++;
        }

        // CASE 3: The current element is 2
        else if(arr[mid] == 2){
            // Swap the 2 at 'mid' with the unexamined element at the 'high' boundary
            swap(arr[mid], arr[high]);
         
            // Shrink the 2s region inward by decrementing 'high'
            high--;
         
            // CRITICAL STEP: We do NOT increment 'mid' here!
            // The element we just brought over from 'high' is completely unexamined. 
            // It could be a 0, 1or 2 so we must let the next loop iteration check it.
        }
    }
}
