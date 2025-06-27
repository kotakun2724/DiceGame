#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "What is your name? \n> ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n\n";

    std::srand(static_cast<unsigned>(std::time(nullptr)));
    std::cout << "Rolling dice...\n";
    int die1 = std::rand() % 6 + 1;
    int die2 = std::rand() % 6 + 1;
    int total = die1 + die2;
    std::cout << "Die 1: " << die1 << "\n";
    std::cout << "Die 2: " << die2 << "\n";
    std::cout << "Total value: " << total << "\n\n";
    if (total > 7) {
        std::cout << "You won\n";
    } else {
        std::cout << "You lost\n";
    }
    return 0;
}