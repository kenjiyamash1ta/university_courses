/*
ВТОРОЙ МАКСИМУМ
Вводятся целые положительных чисел, пока вместо числа не будет введено Ctrl+z. 
Определить значение второго по величине элемента в этой последовательности, то есть элемента, 
который будет наибольшим, если из последовательности удалить одно вхождение наибольшего элемента. 
Массивы не использовать.
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int num, max = 0, sec_max = 0, count = 0;
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

        count++;
        num > max? sec_max = max, max = num:
        num == max? sec_max = max:
        num > sec_max && num < max? sec_max = num:
        num = num;
        }
        

        cout << endl << sec_max << endl;
    }