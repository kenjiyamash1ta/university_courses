/*
Налог. Вычислить величину налога для заданной прибыли по следующим правилам
       Налог         Величина прибыли
	13%           прибыль <= 100 тыс.
	20%           прибыль > 100 тыс., но <= 300 тыс.
	40%           прибыль > 300 тыс.
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    double profit;
    cin >> profit;
    int type_tax;
    profit<=100000? type_tax = 1: profit > 300000? type_tax = 3: type_tax = 2;
    switch(type_tax)
    {
        case 1:
        profit *= 87.0/100.0;
        break;
        case 2:
        profit *= 80.0/100.0;
        break;
        case 3:
        profit *= 60.0/100.0;
        break;
    }
    cout << profit;
}