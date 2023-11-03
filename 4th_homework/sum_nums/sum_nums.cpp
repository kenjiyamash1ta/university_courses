/*
СУММА ЦИФР
Найти сумму цифр целого положительного числа N. Программа должна контролировать его положительность при вводе.
*/
#include <iostream>
using namespace std;
int main(){
    int temp = 0, N = 0; while(N<= 0) cin >> N;
    while(N>0){
        temp += N%10;
        N/=10;
    }
    cout << temp;
}
