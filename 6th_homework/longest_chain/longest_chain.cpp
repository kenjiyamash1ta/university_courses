/*
ДЛИННАЯ ЦЕПОЧКА 
Определить максимальное число одинаковых подряд идущих символов строки. Реализовать функцией.
*/
#include <iostream>
#include <string>
using namespace std;

int findLongestChain(string str) {
    int maxChain = 0;
    int currentChain = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            currentChain++;
        } else {
            maxChain = max(maxChain, currentChain);
            currentChain = 1;
        }
    }

    return max(maxChain, currentChain);
}

int main() {
    string str;
    cout << "Введите строку: ";
    cin >> str;

    int longestChain = findLongestChain(str);
    cout << "Максимальное число одинаковых подряд идущих символов: " << longestChain << endl;

    return 0;
}