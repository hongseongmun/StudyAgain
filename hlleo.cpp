#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}