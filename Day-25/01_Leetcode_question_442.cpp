//442. Find All Duplicates in an Array

/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output


Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
Each element in nums appears once or twice.
*/
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        // Stores the duplicate numbers found in the array
        vector<int> ans; 

        //Allow us to see the size of the given array.
        int size = nums.size();
        
        // Iterate through each number in the array
        for(int i = 0; i < size; i++){

            // Use the current value (as a 0-indexed position) to find its corresponding "hook" index.
            // abs() ensures we get the original value even if it was previously marked negative.
            int hook = abs(nums[i]) - 1;
            
            // If the value at nums[hook] is already negative, it means we have seen 
            // the number 'abs(nums[i])' before. This is a duplicate.
            if(nums[hook] < 0){
                ans.push_back(abs(nums[i]));
            } 

            // If it is positive, this is our first time encountering this value.
            // Flip the sign of the element at nums[hook] to mark it as "visited".
            else{
                nums[hook] = -nums[hook];
            }
        }
        
        // Return the list containing all the duplicate elements
        return ans; 
    }
};