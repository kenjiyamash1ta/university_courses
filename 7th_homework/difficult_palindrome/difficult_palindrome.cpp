/*
СЛОЖНЫЙ ПАЛИНДРОМ
Провека: является ли строка палиндромом(перевертышем) без учета пробелов. 
Пример такой строчки - палиндрома: А РОЗА УПАЛА НА ЛАПУ АЗОРА
*/
#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string s){
    for(auto it = s.begin();it!=s.end();it++)
    {
        if(*it == ' ')
        {
            s.erase(it);
        }
    }
    
}

int main(){
    setlocale(LC_ALL, "rus");
    string test = "А РОЗА УПАЛА НА ЛАПУ АЗОРА";
    if (isPalindrome(test))
    {
        cout << "Это не палиндром";
    }
    else
    {
        cout << "Это не палиндром";
    }
    return 0;
}