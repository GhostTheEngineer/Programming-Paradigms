/*
    * Functional Programming Example - Making a Smoothie

        Functional programming focuses on pure functions. These functions always
        give the same output for the same input and avoid changing external state.

        In this example, we "blend" ingredients and return the smoothie as a string.
    
    * Difference between Procedural and Functional 
        Functional works with pure functions and constant values, so the state NEVER 
        changes. The same inputs always give the same outputs. Parameters must be treated 
        as immutable, even though C++ doesn't enforce this, in functional programming you 
        should either declare them const or make sure you don’t modify them inside the function.

        Procedural works by calling functions that change external variables, updating 
        the program’s state step-by-step. Here, parameters and global variables are meant 
        to be mutated that’s the whole point: take something, modify it, and keep going.

            string sandwich = ""; // global

            void addBread() {
                sandwich += "  ------  \n"; // uses external variable (sandwich), a mutable variable allowing state changes.
            }
*/

#include <iostream>
#include <vector>

// Pure function that returns a blended smoothie
std::string blendSmoothie(const std::vector<std::string>& ingredients) {
    std::string smoothie = "Blended: ";
    for (const auto& item : ingredients) {
        smoothie += item + " ";
    }
    return smoothie;
}

int main() {
    // our data below is hardcoded, therefore, the results will always be the same.
    std::vector<std::string> myIngredients = {"Banana", "Strawberry", "Almond Milk"};
    std::string result = blendSmoothie(myIngredients); // pure function call
    std::cout << result << std::endl;
    return 0;
}
