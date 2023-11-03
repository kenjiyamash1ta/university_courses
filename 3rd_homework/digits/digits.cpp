/*
Наименьшая/наибольшая цифра. Для каждого вводимого положительного целого числа определить:
а) наименьшую десятичну цифру в его записи
б) наибольшую цифру в разрядах с нечетными номерами 
*/
#include <iostream>
using namespace std;

int main(){
     setlocale(LC_ALL, "rus");

    int count = 0, num, digit, min_digit = 10, max_digit = 0, digit_count = 0;
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

        while(num > 0)
        {
            digit_count++;
            digit = num%10;
            num/=10;
            if(digit < min_digit) min_digit = digit;
            if(digit > max_digit && digit_count%2 == 1) max_digit = digit;  
        }
        cout << "Наибольшая цифра в числе в нечетном разряде: " << max_digit << endl;
        cout << "Наименьшая цифра в числе: " << min_digit << endl;
        count++, min_digit = 10, max_digit = 0, digit_count = 0;
    }
}