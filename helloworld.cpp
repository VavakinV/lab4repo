#include <iostream>
#include <string>

int main() {
    std::string name;
    
    std::cout << "Введите ваше имя: ";
    std::cin >> name; // Get user name
    
    std::cout << "Hello world from " << name << std::endl; // Put data in standart output stream
    return 0;
}
