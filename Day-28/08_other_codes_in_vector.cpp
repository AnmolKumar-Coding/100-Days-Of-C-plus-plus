#include <iostream>
#include <vector>

int main(){

    // Setup two vectors with different sizes
    std::vector<int> v1 = {1,2,3,4};
    std::vector<int> v2 = {5,6,7,8,9};

    // 1. GETTING THE SIZE
    // v1.size() is 4, v2.size() is 5
    // Output: 4 5
    std::cout << v1.size() << " " << v2.size() << "\n";

    // 2. POP_BACK (REMOVING FROM THE END)
    // Removes the very last element of v1 (the number 4).
    v1.pop_back();
    
    // Prints v1 after pop_back:
    // Output: 1 2 3
    for(auto it : v1){
        std::cout << it << " ";
    }
    std::cout << "\n";


    // 3. SWAPPING VECTORS
    // Swaps all contents of v1 and v2 instantly.
    // Now, v1 gets {5,6,7,8,9} and v2 gets {1,2,3}
    v1.swap(v2);

    // Prints the new v1 contents:
    // Output: 5 6 7 8 9
    for(auto it : v1){
        std::cout << it << " ";
    }
    std::cout << "\n";

    // Prints the new v2 contents:
    // Output: 1 2 3
    for(auto it : v2){
        std::cout << it << " ";
    }
    // Output: 1 2 3
    std::cout << "\n";

    // 4. CLEARING A VECTOR
    // Wipes out everything inside v1, leaving it completely empty.
    v1.clear();
    
    // Size is now 0.
    // Output: 0
    std::cout << v1.size() << "\n";

    // 5. EMPTY CHECK
    // v1.empty() returns 1 (true) because we just cleared it.
    // v2.empty() returns 0 (false) because it still has {1,2,3}.
    // Output: 1 0
    std::cout << v1.empty() << " " << v2.empty();
}
