/*
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.
*/

#include <iostream>
using namespace std;

int sol(int arr[], int size){

    int ans = 0;

    // Step 1: XOR all elements present inside the array.
    // This gives us: (1 ^ 2 ^ ... ^ N-1) ^ duplicate_number.
    for(int i = 0; i < size; i++){

        ans = ans^arr[i];
    }

    // Step 2: XOR all numbers from 1 to N-1.
    // This cancels out the unique numbers from Step 1, leaving ONLY the duplicate number!.
    for(int i = 1; i < size ; i++){

        ans = ans^i;
        
    }
    return ans;
}

int main(){

    int array[10000];
    int N;
    cout << "Enter the N of the array :- " << endl;
    cin >> N;

    for(int i = 0; i < N; i++){

        cout << "Enter " << i + 1 << "st value of array :-" << endl;
        cin >> array[i];

    }

    cout << "The number duplicated in the series of 1 to N-1 is :-" << sol(array, N) <<endl;

}

//when there is a 1 size array then it prints the number inside the array.... i dont know how to solve it.