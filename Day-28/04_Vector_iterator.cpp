#include <iostream>
#include <vector>

int main(){

    //initialing the vector with predifined values.
    //points to the memory where the memory is lying.
    std::vector<int> v = {1,2,3,4,5,6};

    //other way to access the memory of the vector.
    //it points to the 0th index of the vector.
    std::vector<int>::iterator it = v.begin();

    std::cout << *(it) << "\n";
    it++;
    std::cout << *(it) << "\n";

    it += 2;
    std::cout << *(it) << "\n";

    //end points to the memory location just after the end vector.
    //agar last element ka index 4 h to end 5we index pe point karega.
    std::vector<int>::iterator it1 = v.end();

    it1--;
    std::cout << *(it1) << "\n";

    //it points to the memory just before the 0th index.
    std::vector<int>::reverse_iterator it2 = v.rend();
    
    //by doing this in reverse_iterrator we are making the it2 index go to 0th index.
    //everything is in the reverse order. so it2-- gets reversed.
    it2--;
    std::cout << *(it2) << "\n";

    //this points toward the last index of the vector.
    std::vector<int>::reverse_iterator it3 = v.rbegin();
    std::cout << *(it3) << "\n";

    //by doing this we are going backword in the index form last to second last.
    //everything is in the reverse order. so it3++ gets reversed.
    it3++;
    std::cout << *(it3) << "\n";

    //v.at(0) --> points at the element inside the 0 (we can place any index inside .at())
    //v.back() --> points toward the last element of the vector.
    std::cout << v.at(0) << " " << v.back() << "\n";
}