#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {

    vector<vector<int>> ans;
    
    // IMPORTANT: Sorting groups identical numbers together to easily skip duplicates 
    // and allows the two-index tracker system to work correctly.
    sort(arr.begin(), arr.end());
    
    // Loop 1: Fixes the first element. It stops at 'n-2' to leave at least 
    // two remaining elements for the 'j' and 'l' index trackers.
    for(int i = 0; i < n-2; i++){

        // DUPLICATE CONTROL: If this number matches the previous one, 
        // skip it entirely to prevent generating identical triplets.
        if(i > 0 && arr[i] == arr[i-1]){
            continue;
        }
        
        // Setup two index trackers at opposite ends of the remaining array.
        int j = i + 1; // Starts right after 'i'
        int l = n - 1; // Starts at the very last valid index of the array

        // Move the trackers toward each other until they cross over.
        while (j < l){

            int current_sum = (arr[i] + arr[j] + arr[l]);

            // CASE 1: We found a matching triplet.
            if(current_sum == K){
                ans.push_back({arr[i], arr[j], arr[l]});
            

                // INNER DUPLICATE CONTROL: Skip identical numbers for 'j' 
                // and 'l' to avoid adding the exact same triplet configuration again.
                while(j < l && arr[j] == arr[j+1]){
                    j++;
                }
                while(j < l && arr[l] == arr[l-1]){
                    l--;
                }

                // Move both trackers inward to look for the next unique combination.
                j++;
                l--;
            }
            // CASE 2: The sum is too small. Move 'j' right to get a larger number.
            else if(current_sum < K){
                j++;
            }
            // CASE 3: The sum is too big. Move 'l' left to get a smaller number.
            else{
                l--;
            }

        }
    }
    return ans;
}
