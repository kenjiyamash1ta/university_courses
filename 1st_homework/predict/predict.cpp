#include <iostream>
using namespace std;
int main(){
    double p0, p1, p, day;
    cout << "Введите стоимость валюты в момент отсчета: ";
    cin >> p0;
    cout << "\nВведите количество дней: ";
    cin >> day;
    cout << "\nВведите стоимость валюты на " << day << " день: ";
    cin >> p1;
    cout << "\nВведите стоимость валюты между " << p0 << " и " << p1 << ": ";
    cin >> p;
    double razn = p1 - p0;
    double rostvden = razn/day;
    int answer = ((p-p0)/rostvden)+1;
    cout << "Данная стоимость была через " << answer << " дней\n";
    return 0;
}