#include <iostream>
#include <vector>

int main(){

    // Start with a vector of 9 numbers
    std::vector<int> v = {10,20,30,40,50,60,70,80,90};

    // Prints the original vector:
    // Output: 10 20 30 40 50 60 70 80 90
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";

    // 1. ERASING A SINGLE ELEMENT
    // v.begin() points to the first element (10). 
    // Adding +1 moves it to index 1, which holds the number 20.
    v.erase(v.begin() + 1);

    // Prints the vector after removing 20:
    // Output: 10 30 40 50 60 70 80 90
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";

    // 2. ERASING A RANGE OF ELEMENTS
    // Note: The end boundary of the range is EXCLUSIVE (it deletes up to, but not including, that point).
    // In our current vector {10, 30, 40, 50, 60, 70, 80, 90}:
    // v.begin() + 1 points to 30 (index 1) -> Included
    // v.begin() + 4 points to 60 (index 4) -> Excluded
    // Elements removed: 30, 40, and 50 (indices 1, 2, and 3).
    //sidha matlab h ki [start,end) start inlcuded hoga but end nahi hoga;
    v.erase(v.begin() + 1, v.begin() + 4);
    
    // Prints the final vector:
    // Output: 10 60 70 80 90
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";
}
