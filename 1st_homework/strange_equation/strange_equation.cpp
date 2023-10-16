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
    int N = K.length() * stoi(K);
    if (to_string(N).length() == K.length() + 1) N+= stoi(K);
    cout << N << endl;
}
