#include <iostream>
#include <vector>

int main(){

    std::vector<int> v = {1,2,3,4,5};

    // METHOD 1: Traditional Iterator Loop
    // 'it' starts at the beginning (v.begin()) and moves forward until it reaches the end (v.end()).
    // We must spell out the long type name: std::vector<int>::iterator
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
        // We use *(it) to "look inside" the iterator pointer and get the actual number.
        std::cout << *(it) << " ";
    }
    std::cout << "\n";

    // METHOD 2: Modern Iterator Loop with 'auto'
    // This does the exact same thing as Method 1, but we use the 'auto' keyword.
    // The compiler automatically figures out that 'it' is a vector iterator, saving you typing.
    for(auto it = v.begin(); it != v.end(); it++){
        std::cout << *(it) << " "; // Still need to dereference with *
    }
    std::cout << "\n";

    // METHOD 3: Range-Based For Loop (Highly Recommended)
    // Introduced in C++11. Read this as: "For each integer 'it' inside vector 'v'".
    // No pointers, no boundaries (begin/end), and no '*' needed. 
    for(auto it : v){
        std::cout << it << " "; // 'it' is the actual number directly (1, 2, 3...)
    }

}
