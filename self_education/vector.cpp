/*
#include <vector>
A vector is a sequence of elements that you can access by index.
Syntax to create (declaration):
    std::vector <type> name;
Initializing vector:
    Suppose we want to create and initialize a vector with two elements. 
    However, we don’t know what values we want to add yet:
    std::vector<double> location(2);
    or 
    std::vector<double> subway_child = {800, 1200, 1500};

    To add a new element to the “back”, or end of the vector, we can use the .push_back() function.
    You can also remove elements from the “back” of the vector using .pop_back().
    The .size() function returns the number of elements in the vector.
*/


/*
    Arrays:
    Unlike vectors, its size cannot be changed.
    With arrays, you can’t add or remove elements; you can only modify existing elements.
    Ex.:
        Creating an array:
            int favoriteNums[4];                -- all four elements will initially have the default int value of 0
            int favoriteNums[] = {7, 9, 15, 16};

*/