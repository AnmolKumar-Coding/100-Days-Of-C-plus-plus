#include <iostream>
#include <algorithm>

//complexity of Binary search is O(log(n))

using namespace std;

void FillArray(int Array[100000], int size){
    for(int i = 0; i < size; i++){
        cout << "Enter the " << i + 1 << " Element :-"  ;
        cin >> Array[i];
        cout << endl;
    }
}

int BinarySearch(int arr[], int size, int key){
    int initial = 0;
    int final = size - 1;

    while(final >= initial){
        /* 
           CRITICAL OPTIMIZATION: Prevents Integer Overflow (Safe Midpoint Calculation).
           If arrays are huge (e.g., indices near 2 billion), (initial + final) would 
           exceed INT_MAX and cause a bit-wrap/negative index crash. 
           This subtraction approach calculates the offset distance safely.
        */
        int mid = initial + (final - initial) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            initial = mid + 1; // Explicitly excludes 'mid' to prevent 2-element infinite loops.
        }
        else if(arr[mid] > key){
            final = mid - 1;   // Forces boundaries to aggressively close and cross.
        }
    }
    
    /*
       SENTINEL VALUE STRATEGY: Using INT_MIN as an error code indicator.
       Since valid array indices are strictly >= 0, returning a large negative value 
       guarantees no confusion between a found position and a failure to locate.
    */
    return INT_MIN; 
}

int main(){
    int size;
    cout << "Enter the size of the array you want:--  ";
    cin >> size;
    cout << endl;

    int myarray[100000];

    FillArray(myarray, size);

    int key;
    cout << "Enter the key you want to find :-  ";
    cin >> key;  
    cout << endl;

    /* 
       ALGORITHMIC PREREQUISITE: std::sort uses Introsort (O(N log N) complexity).
       Binary search relies on the mathematical invariant that elements are strictly ordered. 
       If this step is skipped, the monotonic logic inside BinarySearch completely fails.
    */
    sort(myarray, myarray + size);

    int result = BinarySearch(myarray, size, key);
   
    /* 
       MEMORY SAFETY / BOUNDS PROTECTION: Short-circuiting execution on error.
       Checking (result == INT_MIN) FIRST prevents the CPU from attempting an out-of-bounds 
       lookup like myarray[-2147483648], avoiding a severe Segmentation Fault crash.
    */
    if(result == INT_MIN){
        cout << "The key (" << key << ") is not present inside the array" << endl;
    }
    else {
        cout << "The key (" << key << ") is present inside the " << result << " index of the array" << endl;
    }
}
