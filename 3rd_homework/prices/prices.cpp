/*
Определть пределы колебания цен на масло в N торговых точках города. Цены должны вводиться 
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int countDay = 0, price, min_price = -1, max_price;
    while(true)
    {
        cout << "\nВведите " << countDay + 1 << "-ую цену (или ctrl+d, чтобы прервать ввод)";
        cin >> price;
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
         if(min_price < 0) {min_price = price; max_price = price;}
         if(price > max_price) max_price = price;
         if(price < min_price) min_price = price;
    }
        cout << "\nЦена колеблется от "  <<  min_price << " до " << max_price << endl;
    }