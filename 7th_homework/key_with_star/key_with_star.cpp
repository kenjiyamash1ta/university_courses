/*
КЛЮЧ СО ЗВЕЗДОЧКОЙ.  
1. В массиве слов выполнить поиск слов, удовлетворяющих 
запросу-ключу, который может включать в себя (не более одного раза) 
специальный символ '*', которому может соответствовать: 
(а) любая непустая последовательность символов; 
(в) любая, даже пустая, последовательность символов. 
2. Реализовать в виде функции.
*/
#include <iostream>
#include <string>
#include <vector>

bool isMatch(const std::string& word, const std::string& key) {
    if (word.size() < key.size() - 1) {
        return false;
    }
    if (key.find('*') == std::string::npos) {
        return word == key;
    }

    size_t starPos = key.find('*');
    std::string prefix = key.substr(0, starPos);
    std::string suffix = key.substr(starPos + 1);

    if (word.substr(0, prefix.size()) != prefix) {
        return false;
    }

    if (suffix.empty()) {
        return true;
    }

    size_t wordSuffixStart = word.size() - suffix.size();
    return word.substr(wordSuffixStart) == suffix;
}

std::vector<std::string> searchWords(const std::vector<std::string>& arr, const std::string& key) {
    std::vector<std::string> result;
    for (const auto& word : arr) {
        if (isMatch(word, key)) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "apricot", "blueberry", "avocado"};
    std::string key = "ap*";
    std::vector<std::string> matchedWords = searchWords(words, key);
    for (const auto& word : matchedWords) {
        std::cout << word << std::endl;
    }
    return 0;
}