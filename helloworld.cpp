#include <iostream>
#include <string>

int main() {
    std::string name;
    
    std::cout << "Введите ваше имя: ";
    std::cin >> name; // Получение имени пользователя
    
    std::cout << "Hello world from " << name << std::endl; // Вывод в стандартный поток
    return 0;
}