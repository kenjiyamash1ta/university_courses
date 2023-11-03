/*
СУММА ПРОИЗВЕДЕНИЙ
Программа вводит числа x1,x2,x3,x4... до нажатия Ctrl+z. Необходимо вычислить сумму x1 + x1x2 + x1x2x3 + ...
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int count = 0, num, res = 0, last = 1;
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
        res = num*last + res;
        last = num*last;
        
    }
        cout << "\nРезультат " << res << endl;
        return 0;
}