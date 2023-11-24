/*
НАИБОЛЬШЕЕ ПОВТОРЕНИЕ СИМВОЛА 
1. Для заданной строки и введенного символа определить максимальное количество его вхождений подряд  в последовательность символов строки. 
2. Реализовать подсчет в виде функции.
*/
#include <iostream>
#include <string>

int maxConsecutiveOccurrence(const std::string& str, char symbol) {
    int maxCount = 0;
    int consecutiveCount = 0;

    for (char c : str) {
        if (c == symbol) {
            consecutiveCount++;
            maxCount = std::max(maxCount, consecutiveCount);
        } else {
            consecutiveCount = 0;
        }
    }

    return maxCount;
}

int main() {
    std::string str;
    char symbol;

    std::cout << "Введите строку: ";
    std::getline(std::cin, str);

    std::cout << "Введите символ: ";
    std::cin >> symbol;

    int maxOccurrences = maxConsecutiveOccurrence(str, symbol);
    std::cout << "Максимальное количество вхождений подряд: " << maxOccurrences << std::endl;

    return 0;
}
