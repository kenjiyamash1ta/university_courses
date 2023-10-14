#include <iostream>
using namespace std;

int main(){
    int entrance, floor, apartOnFloor, apart;
    cout << "Введите количество этажей: ";
    cin >> floor;
    cout << "\nВведите количество подъездов: ";
    cin >> entrance;
    cout << "\nВведите количество квартир на этаже: ";
    cin >> apartOnFloor;
    cout << "\nВведите номер квартиры которую необходимо найти: ";
    cin >> apart;

    int ans_en, ans_fl;

    ans_en = (apart - 1)/(floor * apartOnFloor) + 1;
    ans_fl = (apart - 1)%(floor * apartOnFloor)/floor + 1;

    cout << apart << " квартира находиться на " << ans_fl << " этаже," << ans_en << " подъезда";
}