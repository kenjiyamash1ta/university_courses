/*
ВЫЧИСЛИТЬ БЕЗ МАССИВА
Программа вводит последовательность положительных вещественных чисел x1,x2,x3 до нажатия Ctrl+z вместо ввода очередного числа. 
Программа должна вывести величину nx1 + (n-1)x2 + ... + 2xn-1 + xn, где n – количество введенных чисел.
*/
#include <iostream>
using namespace std;

long long int summer(){
    static long long int count=0, n = 0, temp = 0;
    int num;
     
        cout << "\nВведите " << count + 1 << "-ое число (или ctrl+d, чтобы прервать ввод)";
        cin >> num;
        if(cin.eof()){
            cin.clear();
            cin.ignore(cin.rdbuf()->in_avail()); cin.clear();
            return 0;
        }
        else
        {
            count++;
            temp = summer() + num*(++n);
            return temp;
        }
}

int main(){
    setlocale(LC_ALL, "rus");
    int res = summer();
    cout << "\n" << res << endl;
}