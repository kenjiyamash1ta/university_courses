/*
Папка. Войдет ли лист X Y в папку A B с учетом возможного разворота листа?
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    double x,y,a,b;
    cout << "Введите размер листа (x на y)";
    cin >> x >> y;
    cout << "Введите размер папки (x на y)";
    cin >> a >> b;
    (x < a && y < b) || (x < b && y < a)? cout << "лист поместится в папку":cout << "лист не поместится"; 
}