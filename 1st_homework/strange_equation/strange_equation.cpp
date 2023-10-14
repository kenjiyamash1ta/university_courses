/*
Странное уравнение. Найти целое число N, которое в заданное целое число раз (в К раз) больше
числа цифр в нем. Значение К вводится. 
*/
#include <string>
#include <iostream>
using namespace std;

int main(){
    string K;
    cin >> K;
    cout << K.length() * stoi(K) << endl;
}
