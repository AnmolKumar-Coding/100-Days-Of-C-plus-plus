#include <iostream>
using namespace std;

bool search(int array[] , int size, int num){

    for(int i = 0; i < size; i++){

        if(array[i] == num){
            return 1;
        }
   }
   return 0;
    
}

int main(){

    int array[10000];
    cout << "Enter the size of the array :- " << endl;
    int size;
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the " << i + 1 << " value of array :- " << endl;
        cin >> array[i];
        cout << endl;
    }

    int num;
    cout << "Enter the number to check if it is inside the array :- " << endl;
    cin >> num;

    cout << endl;
    cout << "Processing -------" << endl;
    cout << endl;

    if(search(array , size , num)){
        cout << num << " is present inside the array." << endl;
    }

    else{
        cout << num << " is not present inside the array." << endl;
    }
}