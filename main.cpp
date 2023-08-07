#include <iostream>


std::string testFunction() {
    return "Goodbye"; // make this function return the string "Hello World"
}

void myFunction() {
    std::cout << "I just got executed!";
}

int main() {
    myFunction();
    std::string text = testFunction();
    std::cout << text  << std::endl;
    return 0; // make this function return the string "Hello"
}
