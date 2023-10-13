#include <iostream>
using namespace std;

void CinDots(int& dots){
    cout << "Введите число точек в окружности: ";
    cin >> dots;
}

void CinSkip(int& skip){
    cout << "\nВведите сколько точек пропускают отрезки: ";
    cin >> skip;
}
int CountLinks(int dots, int skip){
    int temp= skip;
    int ans = 1;

    while(!(temp%dots==0))
    {
        temp += skip + 1;
        ans++;
    }
    return ans;
}

int main(){
    setlocale(LC_ALL, "rus");
    int dots, skip;
    CinDots(dots);
    CinSkip(skip);
    cout << endl << CountLinks(dots,skip) << " звеньев будет в ломаной в момент когда она замкнется";

    return 0;
}