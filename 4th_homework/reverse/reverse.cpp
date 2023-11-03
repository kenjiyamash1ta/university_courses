/*
ПЕРЕВЕРТЫШ 
Получить и вывести число, цифры которого следуют в обратном порядке по отношению к введенному натуральному числу N.
Если в числе N в конце были нули, в начале перевернутого числа при его выводе эти нули должны быть отображены.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "";
    int temp, N; cin >> N;
    while(N>0){
        temp = N%10;
        s.append(to_string(temp));
        N/=10;
    }
    cout << s;
}
