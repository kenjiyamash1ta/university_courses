/*
СКОБКИ 
Написать программу, с функцией, проверяющей правильность расстановки скобок в выражении, 
которое вводится как текстовая строка ( имеется ввиду формальная правильность их открытия и закрытия, 
т.е. согласованность). Например в выражении:      (xxxx)xx(xxx(xxxx)xx)xxx — скобки расставлены правильно,  
а в (yyyyyyy(yyy)yyyyyyy)yyyy)yyyyy(yyyy — неправильно.
*/
#include <iostream>
#include <stack>
#include <string>

bool checkBrackets(const std::string& expression) {
    std::stack<char> bracketStack;

    for (char c : expression) {
        if (c == '(') {
            bracketStack.push(c);
        } else if (c == ')') {
            if (bracketStack.empty() || bracketStack.top() != '(') {
                return false;
            }
            bracketStack.pop();
        }
    }

    return bracketStack.empty();
}

int main() {
    std::string expression;
    std::cout << "Введите выражение: ";
    std::getline(std::cin, expression);

    if (checkBrackets(expression)) {
        std::cout << "Скобки расставлены правильно" << std::endl;
    } else {
        std::cout << "Скобки расставлены неправильно" << std::endl;
    }

    return 0;
}
