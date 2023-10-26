/*
Делимость.Для трехзначного целого числа выяснить, делится ли оно нацело на три, 
запрограммировав прямую проверку признака делимости (сумма цифр должна делиться нацело на три).
*/
#include <iostream>
using namespace std; 

int main(){
    int n,sum = 0;
    cin >> n;
    while (n>0){
        sum = sum + n%10;
        n = n / 10;
    }
    if (sum%3==0){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}  