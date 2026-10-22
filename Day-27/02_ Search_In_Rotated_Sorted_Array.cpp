/*
https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.

Now the array is rotated at some pivot point unknown to you.

For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].

Now, your task is to find the index at which ‘k’ is present in 'arr'.

Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'. 
3. 'arr' can be rotated only in the right direction.

Example:
Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2

Output: 3

Explanation:
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).
*/

#include <vector>
using namespace std;

int pivotelement(vector<int>& arr, int n){

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    if(arr[s] <= arr[e]){
        return s;
    }

    while(s < e){

        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }

    return s;

}

int BinarySearch(vector<int>& arr, int key, int s, int e){
    int initial = s ;
    int final = e;

    while(final >= initial){

        int mid = initial + (final - initial) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            initial = mid + 1;
        }
        else if(arr[mid] > key){
            final = mid - 1;   
        }
    }
    
    return -1; 
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = pivotelement(arr, n);

    // Quick Exit optimization: If the pivot element itself is the target.
    if(k == arr[pivot]){
        return pivot;
    }

    // Condition: Check if target 'k' lies on the right line of the pivot
    // (Between the minimum element and the last element of the array).
    if (arr[pivot] <= k && k <= arr[n-1]){
        int ans = BinarySearch(arr, k, pivot, n-1);
        return ans;
    }

    // Condition: Target 'k' must lie on the left line of the pivot
    else{

        // REVISION NOTE: Changed from 'pivot' to 'pivot - 1' to avoid including
        // the minimum element, which keeps the search array range perfectly sorted.
        int ans = BinarySearch(arr, k, 0, pivot-1);
        return ans;
    }
}
