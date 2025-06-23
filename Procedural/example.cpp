/*
    * Procedural Programming Example - Making a Sandwich

        Procedural programming is a programming paradigm that follows a sequence
        of steps (called procedures aka functions) to perform a task. It focuses
        on instructions and changing the state of variable(s). Think of it like
        following a recipe step-by-step.

        In this example, we build a sandwich by calling a series of functions
        (procedures) that each modify a shared global variable called 'sandwich'. 
        Each step changes the state of the sandwich.
*/

#include <iostream>

//* Shared state (external state)
std::string sandwich = "";

//* Procedures (functions that perform specific steps)

void addBread() {
    sandwich += "  ------  \n"; // append bread layer to sandwich
}

void addPeanutButter() {
    sandwich += "  ^^^^^^  \n"; // ^ symbol represents peanut butter
}

void addJelly() {
    sandwich += "  ~~~~~~  \n"; // ~ symbol represents jelly
}

void addPlate() {
    sandwich += "-________-\n"; // represents a plate
}

//* Procedure to make the sandwich
void makeSandwich() {
    addBread();
    addPeanutButter();
    addJelly();
    addBread();
    addPlate();
}

//* Entry point
int main() {
    makeSandwich(); // build the sandwich by calling the procedure
    std::cout << "Your sandwich: \n" << sandwich << std::endl; // show final result
    return 0;
}
