/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.


Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // This vector will hold the counts of each number
        vector<int> ans;
        
        // 1. Sort the input vector (array) so identical numbers are grouped together
        // Example: [1, 2, 1, 1, 2] becomes [1, 1, 1, 2, 2]
        sort(arr.begin(), arr.end());

        // Tracks the count of the number we are currently looking at
        int current_count = 1;

        // 2. Loop through the array to count how many times each number appears.
        // We use (arr.size() - 1) so arr[i + 1] never looks past the last item.
        for(int i = 0; i < (arr.size() - 1); i++){

            // If the next number is identical, increase our current count
            if(arr[i] == arr[i + 1]){
                current_count++;
            }
            // If the next number is different, a new group is starting!
            else{
                ans.push_back(current_count); // Save the count of the old group
                current_count = 1;            // Reset the counter back to 1 for the new number
            }
        }
        
        // 3. THE SAFETY NET
        // The loop above finishes before saving the count of the very last group.
        // This line ensures the last group's count is not left behind.
        ans.push_back(current_count);
        
        // 4. Sort our list of counts from smallest to largest
        // Example: If ans was, sorting makes it [1, 2, 2]
        sort(ans.begin(), ans.end());

        // 5. Check if any duplicate frequency counts exist.
        // Since 'ans' is sorted, any matching frequencies will sit right next to each other.
        for(int i = 0; i < (ans.size() - 1); i++){
            // If two adjacent counts match, the occurrences are NOT unique
            if(ans[i] == ans[i+1]){
                return false;
            }
        }
        
        // If the loop finished without finding any duplicate counts, they are all unique!
        return true;
    }
};
