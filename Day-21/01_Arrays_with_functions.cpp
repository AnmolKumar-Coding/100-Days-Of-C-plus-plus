#include <iostream>
using namespace std;


void arrays(int arr[] ,int  size){

    cout << "Printing the array :- " << endl;

    for(int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "Printing done " << endl;

}


int main(){

    int array[1000];
    
    int size ;
    cout << "Enter the size of the array :- " << endl;
    cin >> size;
    cout << endl;

    for(int i = 0; i < size ; i++){
        cout << "Enter the" << " " << (i + 1) << "st value :- " << endl;
        cin >> array[i];
    }

    arrays(array , size);
    

}