#include <bits/stdc++.h> // Includes almost all standard C++ libraries at once
#include <utility>       // Includes the specific library needed to use std::pair

int main(){

    // 1. BASIC PAIR
    // Creates a pair named 'p' that holds two integers: 1 and 3.
    std::pair<int,int> p = {1,3};

    // Prints '1' (p.first) and '3' (p.second)
    std::cout << p.first <<" " << p.second << "\n";


    // 2. NESTED PAIR (A pair inside a pair)
    // 'p1' holds an integer first, and another pair as its second item.
    // Structure: 1 is the first part. {2, 3} is the second part.
    std::pair<int,std::pair<int,int>> p1 = {1,{2,3}};

    // Prints '1' (p1.first)
    // Prints '2' (p1.second.first -> the first item of the inner pair)
    // Prints '3' (p1.second.second -> the second item of the inner pair)
    std::cout << p1.first << " " << p1.second.first << " " <<  p1.second.second << "\n";


    // 3. ARRAY OF PAIRS
    // Creates a list (array) of 3 pairs.
    // Index 0 is {1,2}, Index 1 is {3,4}, Index 2 is {5,6}
    std::pair<int,int> arr[] = {{1,2},{3,4},{5,6}};

    // Prints the components of all three pairs in order: 1 2 3 4 5 6
    std::cout << arr[0].first << " " << arr[0].second << " " <<  arr[1].first << " "<< arr[1].second<< " " <<arr[2].first << " " <<arr[2].second;

}
