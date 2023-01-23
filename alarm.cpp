#include <iostream>
#include <string>

std::string passcode;

int main() {
    std::cout << "Enter passcode to arm the alarm: ";
    std::cin >> passcode;

    std::cout << "Alarm armed with passcode: " << passcode << std::endl;

    std::cout << "Enter passcode to disarm the alarm: ";
    std::string enteredPasscode;
    std::cin >> enteredPasscode;

    if (enteredPasscode == passcode) {
        std::cout << "Alarm disarmed." << std::endl;
    } else {
        std::cout << "Incorrect passcode. Alarm sounding." << std::endl;
        // add alarm sound code here
    }

    return 0;
}
