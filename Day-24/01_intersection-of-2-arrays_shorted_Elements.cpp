#include <iostream> 
#include <vector> 
using namespace std; 

// This function finds common elements between two arrays
vector<int> intersectionofarrays(int arr1[], int arr2[], int size1, int size2){

    // 'ans' is a dynamic list that will store our matching numbers
    vector<int> ans; 
    

    // We use two counters (i and j) to move through both arrays at the same time.
    // The loop stops as soon as either counter reaches the end of its array.
    for(int i = 0 , j = 0; i < size1 && j < size2; ){

        // Case 1: The numbers in both arrays match!
        if(arr1[i] == arr2[j]){

            // Add the matching number to our result list
            ans.push_back(arr1[i]);

            // Move both counters forward to look at the next numbers
            i++; 
            j++; 
        } 

        // Case 2: The number in the first array is smaller
        else if(arr1[i] < arr2[j]){

            // Move the first array's counter forward
            i++; 
            // Note: This logic assumes your inputs are already sorted from smallest to largest!
        } 

        // Case 3: The number in the second array is smaller
        else{

            // Move the second array's counter forward
            j++; 
        } 
    } 

    // Send the list of matching numbers back to the main function
    return ans; 
} 

int main(){

    // --- Getting Data for Array 1 ---
    int size1; 
    cout << "Enter the size of the first array :- " << endl; 
    cin >> size1; 
    
    // Creating an array that can hold up to 10,000 numbers
    int array1[10000]; 
    for(int i = 0; i < size1; i++){
        cout << "Enter the " << i + 1 << " element :- "; 
        cin >> array1[i]; // Storing user input at index i
        cout << endl; 
    } 

    // --- Getting Data for Array 2 ---
    int size2; 
    cout << "Enter the size of the second array :- " << endl; 
    cin >> size2; 
    
    // Creating a second array that can hold up to 10,000 numbers
    int array2[10000]; 
    for(int i = 0; i < size2; i++){
        cout << "Enter the " << i + 1 << " element :- "; 
        cin >> array2[i]; // Storing user input at index i
        cout << endl; 
    } 

    // Calling the function and saving its returned vector into 'final_ans'
    vector<int> final_ans = intersectionofarrays(array1, array2, size1, size2); 

    // --- Printing the Results ---
    cout << "\nIntersection elements are: "; 

    // Loop through the vector from index 0 to its final size
    for(int i = 0; i < final_ans.size(); i++){
        cout << final_ans[i] << " "; 
    } 
    cout << endl; 

    return 0; 
}
