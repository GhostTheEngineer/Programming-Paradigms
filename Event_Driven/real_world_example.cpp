/*
    * Event-Driven Programming Example - Smart Home Sensor System

    This simulates how an event loop might dispatch events to handlers
    in a real-world embedded or GUI system. Each "sensor" triggers
    an event, and the system responds by calling the appropriate handler.
*/

#include <iostream>
#include <string>
#include <map>
#include <functional>

// Event handler typedef
using EventHandler = std::function<void()>;

// Event system
class EventDispatcher {
private:
    std::map<std::string, EventHandler> listeners;

public:
    void registerEvent(const std::string& eventName, EventHandler handler) {
        listeners[eventName] = handler;
    }

    void emit(const std::string& eventName) {
        if (listeners.count(eventName)) {
            listeners[eventName](); // Call the handler
        } else {
            std::cout << "No handler for event: " << eventName << std::endl;
        }
    }
};

// Event Handlers
void handleHighTemperature() {
    std::cout << "[ACTION] Temperature is too high! Turning on the fan." << std::endl;
}

void handleDoorOpened() {
    std::cout << "[LOG] Door opened. Event recorded at 4:32 PM." << std::endl;
}

void handleMotionDetected() {
    std::cout << "[ALERT] Motion detected in living room!" << std::endl;
}

int main() {
    EventDispatcher dispatcher;

    // Register event handlers
    dispatcher.registerEvent("temperature_high", handleHighTemperature);
    dispatcher.registerEvent("door_opened", handleDoorOpened);
    dispatcher.registerEvent("motion_detected", handleMotionDetected);

    // Simulate events coming in from sensors
    std::cout << "[EVENT] temperature_high\n";
    dispatcher.emit("temperature_high");

    std::cout << "[EVENT] motion_detected\n";
    dispatcher.emit("motion_detected");

    std::cout << "[EVENT] door_opened\n";
    dispatcher.emit("door_opened");

    std::cout << "[EVENT] unknown_event\n";
    dispatcher.emit("unknown_event");

    return 0;
}
