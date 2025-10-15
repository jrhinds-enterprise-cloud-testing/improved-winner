// Simple Hello World test in C++

#include <iostream>
#include <string>

std::string helloWorld() {
    return "Hello, world!";
}

int main() {
    if (helloWorld() == "Hello, world!") {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }
    return 0;
}
