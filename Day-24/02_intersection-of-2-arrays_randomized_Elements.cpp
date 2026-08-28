#include <iostream>
#include <limits.h>
#include <vector>   // 1. HEADER: Must include this library. Regular arrays don't need it, but vectors require it.

using namespace std;

// 2. FUNCTION TYPE: The prefix 'vector<int>' tells C++ this function outputs a vector bundle.
// Rule: A function declared as 'vector<int>' can ONLY return a variable that is also a 'vector<int>'.
vector<int> commonelements(int arr1[], int arr2[], int size1, int size2){
    
    // 3. DECLARATION: Creates a dynamic vector variable named 'ans'.
    // 4. TYPE LOCK: The '<int>' template parameter locks this vector to store integers ONLY. You cannot push a string or float here.
    // 5. INITIAL SIZE: Right now, 'ans' has a starting size of exactly 0. It takes up minimal memory.
    vector<int> ans; 
    
    for(int i = 0; i < size1; i++){
        int elements = arr1[i];
        for(int j = 0; j < size2; j++){
            if(elements == arr2[j]){
                
                // 6. FUNCTION CALL: '.push_back()' is a built-in vector method. You cannot use it on standard arrays.
                // 7. MEMORY GROWING: It takes the value from 'arr2[j]' and appends it to the very end of the 'ans' vector list.
                // 8. AUTO-RESIZE: Every time this line triggers, the vector automatically stretches its memory space by +1 slot.
                ans.push_back(arr2[j]); 
                
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    
    // 9. RETURN VALUE: Sends the completed 'ans' vector object out of the function.
    // 10. TYPE MATCH: 'ans' matches the function's return type perfectly, satisfying the compiler.
    return ans; 
}

int main(){
    // --- Getting Data for Array 1 ---
    int size1;
    cout << "Enter the size of the first array :- " << endl;
    cin >> size1;
    int array1[10000];
    for(int i = 0; i < size1; i++){
        cout << "Enter the " << i + 1 << " element :- ";
        cin >> array1[i];
        cout << endl;
    }

    // --- Getting Data for Array 2 ---
    int size2;
    cout << "Enter the size of the second array :- " << endl;
    cin >> size2;
    int array2[10000];
    for(int i = 0; i < size2; i++){
        cout << "Enter the " << i + 1 << " element :- ";
        cin >> array2[i];
        cout << endl;
    }

    // 11. CATCHING ASSIGNMENT: The variable 'final_ans' receives the results.
    // 12. DATA COMPATIBILITY: Because 'commonelements' outputs a vector bundle, 'final_ans' MUST be declared as a 'vector<int>'.
    // 13. INVALID WRITING: You cannot catch this data inside a primitive variable like 'int final_ans' or 'int final_ans[10000]'. Vectors only copy into vectors.
    vector<int> final_ans = commonelements(array1, array2, size1, size2);

    cout << endl;
    cout << "The common elements inside the array are :- ";
    
    // 14. COUNT METHOD: '.size()' is a built-in function that queries the vector for its exact current item count.
    // 15. DYNAMIC BOUND: This keeps the loop safe. If 3 elements matched, '.size()' evaluates to 3, and the loop goes from index 0 to 2.
    // 16. PROTECTION: This prevents "out-of-bounds" errors because the loop automatically self-adjusts to the vector's actual length.
    for(int i = 0; i < final_ans.size(); i++){
        
        // 17. INDEX ACCESS: Vectors support regular array bracket notation '[]'.
        // 18. VALUE EXTRACTION: 'final_ans[i]' targets and pulls out the specific integer sitting at index position 'i'.
        cout << final_ans[i] << " "; 
    }
    
    return 0;
}
