/*
ДНИ РОЖДЕНИЯ
вводятся номера дней недели, на которые приходятся дни рождения N из ваших знакомых в этом году(0-вск, 1 - пн и тд).
Определить:
а) количество дней рождений, приходившихся на каждый из дней недели
б) номер дня недели, на который приходится максимальное число дней недели 
*/
#include <iostream>
using namespace std;

int main(){
    int week[]={0,0,0,0,0,0,0}, num, count = 0, max = 0;

    while(true)
    {
        cout << "\nВведите " << count + 1 << "-ое число (или ctrl+d, чтобы прервать ввод)";
        cin >> num;
        if(cin.eof()){
            cout << endl;
            cin.clear();
            cin.ignore(cin.rdbuf()->in_avail()); cin.clear();
            break;
        }
        if(!cin)
        {
            cin.clear();
            cin.ignore(cin.rdbuf()-> in_avail());
            continue;
        }
        week[num]++;
        count++;
    }
    for(int i: week) {cout << i << ' ';  
        i > max?max=i:i=i;
    }
    cout << endl << max << endl;
}