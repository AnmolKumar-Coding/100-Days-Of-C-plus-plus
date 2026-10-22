#include <iostream>

using namespace std;

void fillarray(int arr[], int size){

    for(int i = 0; i < size; i++){

        cout << "Enter the " <<i + 1 << " Element of the array :-  ";
        cin >> arr[i];
    }

}

int pivotelement(int arr[], int size){

    int s = 0;
    int e = size - 1;
    int m = s + (e-s)/2;

    // O(1) Edge Case: If the array is already fully sorted (not rotated), 
    // the first element will be smaller than or equal to the last element.
    if(arr[s] <=arr[e]){
        return s;
    }
    while(s < e){

        // If the middle element is greater than or equal to the first element,
        // it means the left half (from index 0 to m) is normally sorted.
        // Therefore, the pivot (inflection point) must lie strictly in the right half.
        if(arr[m] >= arr[0]){
            s = m + 1;
        }

        // If the middle element is less than the first element,
        // it means the pivot lies in the left half, and 'm' itself could potentially be the pivot.
        else{
            e = m;
        }

        m = s + (e-s)/2;
    }

    // When s == e, the search space has converged to exactly one element,
    // which is guaranteed to be the index of the pivot (minimum) element.
    return s;

}

int main(){

    int arr[100000];

    int size;
    cout << "Enter the size of the array :-  " ;
    cin >> size;

    fillarray(arr, size);

    cout << "The pivot element is in the index " << pivotelement(arr, size);


}