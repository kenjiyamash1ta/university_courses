/*
Маршрут. Размеры очередей на маршрутное такси на первой и второй остановках состояли L1 и L2. Как
изменятся длины очередей, если через эти остановки проедет первоначально пустое маршрутное такси, 
вмещающее M пассажиров? Считать, что люди на остановках не выходят
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    int fqueue, squeue, fspace, temp;
    cout << "\nВведите размер первой очереди: ";
    cin >> fqueue;
    cout << "Введите размер второй очереди: ";
    cin >> squeue;
    cout << "Введите количество свободных мест в автобусе: ";
    cin >> fspace;

    fqueue < fspace? (fspace -= fqueue, fqueue = 0): (fqueue -= fspace, fspace = 0);
    squeue < fspace? (fspace -= squeue, squeue = 0): (squeue -= fspace, fspace = 0);

    cout << "\nСвободного места: " << fspace << "\t";
    cout << "Первая очередь: " << fqueue << "\t";
    cout << "Вторая очередь: " << squeue << "\t";
}