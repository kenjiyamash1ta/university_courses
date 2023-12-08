/*
КЛЮЧ СО ЗВЕЗДОЧКАМИ*.  
1. В массиве слов выполнить поиск слов, удовлетворяющих запросу-ключу, 
который может включать в себя (БОЛЕЕ одного раза) специальный символ '*', 
которому может соответствовать: 
(а) любая непустая последовательность символов; 
(в) любая, даже пустая, последовательность символов. 
2. Реализовать в виде функции.
*/
#include <iostream>
#include <string>
#include <vector>

bool checkMatch(const std::string& word, const std::string& key) {
    int wordLen = word.length();
    int keyLen = key.length();

    // Если в ключе нет '*', просто сравниваем строки
    if (key.find('*') == std::string::npos) {
        return word == key;
    }

    // Если '*' находится в конце ключа, проверяем префикс строки
    if (key[keyLen - 1] == '*') {
        if (keyLen - 1 > wordLen) {
            return false;
        }
        return word.substr(0, keyLen - 1) == key.substr(0, keyLen - 1);
    }

    // Если '*' находится в начале ключа, проверяем суффикс строки
    if (key[0] == '*') {
        if (keyLen - 1 > wordLen) {
            return false;
        }
        return word.substr(wordLen - keyLen + 1, keyLen - 1) == key.substr(1, keyLen - 1);
    }

    // Если '*' находится в середине ключа, разделяем ключ на префикс и суффикс
    std::string prefix = key.substr(0, key.find('*'));
    std::string suffix = key.substr(key.find('*') + 1);

    int prefixLen = prefix.length();
    int suffixLen = suffix.length();

    if (prefixLen > wordLen || suffixLen > wordLen) {
        return false;
    }

    // Сравниваем префикс и суффикс с соответствующими частями строки
    return word.substr(0, prefixLen) == prefix && word.substr(wordLen - suffixLen) == suffix;
}

std::vector<std::string> searchWords(const std::vector<std::string>& words, const std::string& key) {
    std::vector<std::string> result;

    for (const std::string& word : words) {
        if (checkMatch(word, key)) {
            result.push_back(word);
        }
    }

    return result;
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "orange", "pear", "grape"};
    std::string key = "o*e";

    std::vector<std::string> matchedWords = searchWords(words, key);

    std::cout << "Matched words:" << std::endl;
    for (const std::string& word : matchedWords) {
        std::cout << word << std::endl;
    }

    return 0;
}