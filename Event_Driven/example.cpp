/*
    Event-Driven Programming Example - Virtual Button

    Event-driven programming responds to user or system actions ("events").
    Here, we simulate pressing buttons that trigger specific responses.
*/

#include <iostream>
#include <string>

void onClick(const std::string& buttonName) {
    if (buttonName == "Start") {
        std::cout << "Game Started!" << std::endl;
    } else if (buttonName == "Quit") {
        std::cout << "Game Exited." << std::endl;
    } else {
        std::cout << "Unknown button pressed." << std::endl;
    }
}

int main() {
    std::string userAction;
    std::cout << "Press a button (Start/Quit): ";
    std::cin >> userAction;
    onClick(userAction); // simulate event
    return 0;
}
