#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    int dots, skip;
    cout << "Введите число точек в окружности: ";
    cin >> dots;
    cout << "\nВведите сколько точек пропускают отрезки: ";
    cin >> skip;
    int temp= skip;
    int ans = 1;

    while(!(temp%dots==0))
    {
        temp += skip;
        ans++;
    }
    
    cout << endl << ans << " звеньев будет в ломаной в момент когда она замкнется";

    return 0;
}