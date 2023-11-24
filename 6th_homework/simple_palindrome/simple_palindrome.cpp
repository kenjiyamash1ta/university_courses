/*
ПРОСТОЙ ПАЛИНДРОМ
1.Выполнить проверку: является ли строка палиндромом(перевертышем) с учетом всех символов, включая пробелы
2. Реализовать проверку в виде функции
*/
 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;

 bool isPalindrome(const string str)
 {
    string temp = str;
    reverse(temp.begin(), temp.end());
    return str == temp;
 }

int main(){
    string str = "zxc 1221 cxz";
    cout << isPalindrome(str) << endl;
}