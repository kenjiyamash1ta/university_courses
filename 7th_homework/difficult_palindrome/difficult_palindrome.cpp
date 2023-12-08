/*
СЛОЖНЫЙ ПАЛИНДРОМ
Провека: является ли строка палиндромом(перевертышем) без учета пробелов. 
Пример такой строчки - палиндрома: А РОЗА УПАЛА НА ЛАПУ АЗОРА
*/
#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        while (!isalpha(str[left])) {
            left++;
        }
        while (!isalpha(str[right])) {
            right--;
        }
        
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main() {
    setlocale(LC_ALL, "rus");
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    
    if (isPalindrome(input)) {
        std::cout << "Это палиндром" << std::endl;
    } else {
        std::cout << "Это не палиндром" << std::endl;
    }
    
    return 0;
}