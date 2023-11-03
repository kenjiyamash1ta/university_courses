/*
КОЛИЧЕСТВО НАИБОЛЬШИХ
Вводятся набор целых положительных чисел, завершаемый вводом комбинации Ctrl+z. 
Определить количество чисел в этой последовательности, которые равны ее наибольшему 
из всех введенных чисел. Массивы не использовать.
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int count = 0, num, max_num = 0, count_max = 0;
    while(true)
    {
        cout << "\nВведите " << count + 1 << "-ое число (или ctrl+d, чтобы прервать ввод)";
        cin >> num;
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

        num > max_num? max_num = num, count_max = 1:
        max_num == num? count_max++:
        num = num;
    }
        cout << "\nКоличество чисел максимального значения" << count_max << endl;
        return 0;
}