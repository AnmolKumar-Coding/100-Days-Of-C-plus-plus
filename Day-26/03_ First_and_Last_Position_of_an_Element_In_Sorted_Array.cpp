#include <bits/stdc++.h> 
#include <vector>

using namespace std;

int firstOccurance(vector<int>& arr, int size, int key){

    int initial = 0;
    int finals = size - 1;
    int ans = -1;

    while(initial <= finals){

        int mid = initial + (finals - initial)/2;

        if(arr[mid]== key){
            ans = mid;
            finals = mid - 1;       // Keep searching right for first occurrence
        }

        else if(arr[mid] < key){
            initial = mid + 1;      // Search right
        }
        else if(arr[mid] > key){
            finals = mid - 1;       // Search left
        }
    }
    return ans;
}

int lastOccurance(vector<int>& arr, int size, int key){

    int initial = 0;
    int finals = size - 1;
    int ans = -1;

    while(initial <= finals){

        int mid = initial + (finals - initial)/2;

        if(arr[mid]== key){
            ans = mid;
            initial = mid + 1;      // Keep searching right for last occurrence
        }

        else if(arr[mid] < key){
            initial = mid + 1;
        }
        else if(arr[mid] > key){
            finals = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> answers;      // 1. Declaration

    // Assigning values to the pair components.
    answers.first = firstOccurance(arr, n, k);      // 2. Assigning the 1st value
    answers.second = lastOccurance(arr, n, k);      // 3. Assigning the 2st value

    return answers;
}

//learned the pair code which can be used to push two answers in a pair.