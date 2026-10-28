#include "helloworld.h"
#include <iostream>

void HelloWorld(const std::string& command) {
    if (command == "print") {
        std::cout << "Hello, World!" << "\n";
    }
    else {
        std::cout << command << "\n";
    }
}