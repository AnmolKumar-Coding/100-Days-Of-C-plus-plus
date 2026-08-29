//https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

/*
You are given an integer array 'ARR' of size 'N' and an integer 'S'. 
Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:
Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. 
In case if two pairs have the same first value, the pair with a smaller second value should come first.

Sample Input 1:
5 5
1 2 3 4 5
Sample Output 1:
1 4
2 3
Explaination For Sample Output 1:
Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).

*/

#include <bits/stdc++.h> // Includes all standard C++ libraries at once (commonly used in competitive programming)
#include <vector>

using namespace std;

// Function that finds all pairs of integers in 'arr' that add up to the target sum 's'
vector<vector<int>> pairSum(vector<int> &arr, int s){
    
    // Create a 2D vector to store all the valid answer pairs
    vector<vector<int>> ans; 
    
    // Sort the entire array in ascending order (smallest to largest)
    sort(arr.begin(), arr.end());   //Only used for the Vectors. For normal array sorting its different. Note: For normal arrays, use sort(arr, arr + n), where n is the number of elements in the array.
    
    // Outer loop: Iterate through each element to pick the first number of the pair
    for(int i = 0; i < arr.size(); i++){ 
        
        // Inner loop: Check the remaining numbers after index 'i' to find the second number
        for(int j = i + 1; j < arr.size(); j++){ 
            
            // Check if the current pair adds up to the target sum 's'
            if((arr[i] + arr[j]) == s){ 
                
                // If the sum matches, create a pair using {} and add it into the 'ans' vector
                ans.push_back({arr[i], arr[j]}); 
            } 
        } 
    } 
    
    // Return the final list of pairs to the caller
    return ans; 
}
