/*
Трасса-1. Длина кольцевой трассы — 107 километров. Гонщик стартует с нулевого километра и едет со скоростью v 
километров в час. На какой километровой отметке он остановится через t часов?
Время и скорость — целочисленные и неотрицательные.
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    int v, t;
    cout << "Введите скорость: ";
    cin >> v;
    cout << "Введите время: ";
    cin >> t;
    cout << v*t%107;
}