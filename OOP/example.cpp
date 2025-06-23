/*
    * Object-Oriented Programming Example - Pet Simulator

        OOP is about modeling real-world objects. Each object has members called data (variables)
        and behavior (methods). Here, we create a virtual Pet class.
*/

#include <iostream>

// A class is like a blueprint you use to construct an object using its internal members.
class Pet {
private:
    std::string m_Name; // variable member

public:
    Pet(const std::string& petName) : m_Name(petName) {} // constructor

    //* Methods (behaviors)
    void feed() {
        std::cout << m_Name << " is eating!" << std::endl;
    }

    void play() {
        std::cout << m_Name << " is playing!" << std::endl;
    }
};

//* Entry point
int main() {
    Pet dog("Max"); // construct new object of type Pet passing "Max" for its name
    // Call methods using object variable
    dog.feed();
    dog.play();
    return 0;
}
