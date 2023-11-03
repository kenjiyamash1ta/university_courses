/*
НАИБОЛЕЕ ДЛИННЫЙ МОНОТОННЫЙ УЧАСТОК
Вводятся набор целых положительных чисел, пока вместо числа не будет введено Ctrl+z. 
Определить наиболее длинный монотонный фрагмент этой последовательности (т.е. фрагмент, 
где все элементы либо строго больше предыдущего, либо строго меньше). 
От какого по счету и до какого по счету числа он располагается.
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int count = 0, num,pred, max_len = 0, count_len = 1;
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
        num == pred? count_len++: count_len = 1;
        if(count_len > max_len) max_len = count_len;
        pred = num;

    }
        cout << "\nМаксимальная последовательность - " << max_len << endl;
        return 0;
}