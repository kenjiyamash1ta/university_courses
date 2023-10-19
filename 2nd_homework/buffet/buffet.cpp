/*
Буфет.Пирожок в буфете стоит A рублей и B копеек. Определить, сколько рублей и копеек нужно заплатить за N пирожков.
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int a,b,n,temp;
    cout << "Введите цену пирожка: ";
    cin >> a >> b;
    cout << "Введите количество: ";
    cin >> n;

    temp = (a*100+b) * n;
    cout << "Итого: " << temp/100 << " рублей " << temp%100 << " копеек.";


}