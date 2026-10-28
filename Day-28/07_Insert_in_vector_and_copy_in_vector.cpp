#include <iostream>
#include <vector>

int main(){

    // Start with a vector of 4 numbers
    std::vector<int> v = {10,30,50,60};
    
    // Prints the original vector:
    // Output: 10 30 50 60
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";

    // 1. INSERT A SINGLE ELEMENT AT THE START
    // Puts the number 300 right at the beginning (v.begin())
    // Output: 300 10 30 50 60
    v.insert(v.begin(), 300);
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";

    // 2. INSERT A SINGLE ELEMENT AT THE END
    // Puts the number 300 right at the very end (v.end())
    // Output: 300 10 30 50 60 300
    v.insert(v.end(), 300);
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";

    // 3. INSERT MULTIPLE COPIES OF A VALUE
    // Syntax: v.insert(position, how_many_times, value)
    // Current vector is {300, 10, 30, 50, 60, 300}
    // v.begin() + 3 points to index 3 (the number 50).
    // This inserts the number 69 three times right before that spot.
    // Output: 300 10 30 69 69 69 50 60 300
    v.insert(v.begin()+ 3, 3, 69);
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";

    // 4. INSERT A RANGE FROM ANOTHER VECTOR
    // Creates a smaller vector containing two 50s: {50, 50}
    std::vector<int> copy = {50, 50};
    
    // Copies everything from copy.begin() to copy.end() and places it at v.begin()
    // Output: 50 50 300 10 30 69 69 69 50 60 300
    v.insert(v.begin(), copy.begin(), copy.end());
    for(auto it : v){
        std::cout << it << " ";
    }
    std::cout << "\n";
    
}
