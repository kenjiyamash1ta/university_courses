/*
Погода. Вводятся значения температуры по дням наблюдений до момента ввода Ctrl+d. Определить:
а) количество введеных температур
б) максимальную из них
в) минимальное значение среди положительных температур
г) среднее среди отрицательных температур
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int countDay = 0, countNeg = 0, maxPos = 0, minPos = 100, temp = 0, sumNeg = 0;
    while(true)
    {
        cout << "\nВведите " << countDay + 1 << "-ую температуру (или ctrl+d, чтобы прервать ввод)";
        cin >> temp;
        if(cin.eof()){
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

         countDay++;
         if(temp < 0) {countNeg++; sumNeg += temp;}
         if(temp >= 0) {temp > maxPos? maxPos = temp: temp < minPos? minPos = temp: temp *= 1;}
    }

    cout << endl << countDay << endl;
    cout << maxPos << endl;
    cout << minPos << endl;
    cout << sumNeg/countNeg << endl;

       
}
