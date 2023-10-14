/*
Вдоль кольца по часовой стрелке расставлены точны с номерами 0,1,2,...,N. Точки начинают 
соеденять отрезками, пропуская на каждом шаге(по часовой стрелке) по К точек. Нужно по введеным N
и К определить, сколько звеньев будет в ломаной, когда она замкнется.
*/
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