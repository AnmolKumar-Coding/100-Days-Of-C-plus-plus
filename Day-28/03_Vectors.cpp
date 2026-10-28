#include <iostream>
#include <vector>

int main(){

    //initialising the vector. and vector can increase it size, when we push the elements.
    //vector is a sequence container that represents a dynamic array.
    std::vector<int> v;         

    //pushig the element 1 in the vector v.
    v.push_back(1);             
    std::cout << v[0] <<"\n";

    //same as push_back, we push the element to v.
    v.emplace_back(2);          
    std::cout << v[1] <<"\n";

    //initialising a vector which can store the elements in pair in vector v1.
    std::vector<std::pair<int,int>> v1;

    //pushing the pair in v1.
    v1.push_back({1,2});

    //pushing the pair in v1(the difference is we dont use {}, it assumes that it is in pair)
    v1.emplace_back(3,4);

    std::cout << v1[0].first << " " << v1[0].second << " " << v1[1].first << " " << v1[1].second << "\n";

    //making a vector v2 of 5 garbage value vectors.
    std::vector<int> v2(5);

    //making the vector v3 with 5 predifined values which is 100.
    std::vector<int> v3(5,100);
    std::cout << v3[3] <<'\n';
    v3.push_back(1);

    //we can push the element even initialy have defined the vector with a predefined size.
    std::cout << v3[5] << "\n";

    //we can copy the vector v3 in our newly made vector v5.
    std::vector<int> v5(v3);
    std::cout << v3[4] <<'\n';

}