/*
ПОВТОРЫ.  
1. Выполнить удаление всех повторов в любых подряд идущих символах строки. 
2. Реализовать в виде функции.
*/
#include <iostream>
#include <string>

std::string removeConsecutiveDuplicates(const std::string& str) {
    std::string result;
    for (size_t i = 0; i < str.size(); ++i) {
        if (i == 0 || str[i] != str[i-1]) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input = "aaabbbccdddeee";
    std::string result = removeConsecutiveDuplicates(input);
    std::cout << "Вводная строка: " << input << std::endl;
    std::cout << "После удаления повторений: " << result << std::endl;
    return 0;
}
