#include <iostream>
#include <limits.h>
#include <algorithm>    // Optional but recommended: This is the official home of max() and min() [in my computer without this the min() and max() was working.]

using namespace std;

int getmax(int arr[] ,int size){

    int maximum = INT_MIN;              

    for(int i = 0; i < size; i++){

        // Predefined max() function compares 'maximum' and 'arr[i]', then saves the larger one back into 'maximum'
        maximum = max(maximum, arr[i]);

    }
    return maximum;
}


int getmin(int arr[] , int size){

    int minimum = INT_MAX;

    for(int i = 0; i < size ; i++){

        // Predefined min() function compares 'minimum' and 'arr[i]', then saves the smaller one back into 'minimum'
        minimum = min(minimum , arr[i]);

    }
    return minimum;
}


int main(){

    int array [10000];

    int size;
    cout << "Enter the size of the array :-" << endl;
    cin >> size;                

    for(int i = 0; i <size; i++){

        cout << "Enter the " << i + 1 << " st value :-" << endl;
        cin >> array[i];
        cout << endl;
    }

    cout << "The minimum value of the array is :- " << getmin(array , size) << endl;
    cout << "The maximum value of the array is :- " << getmax(array , size) << endl;

}