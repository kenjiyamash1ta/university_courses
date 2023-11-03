/*
СУММА ЧЕТНЫХ
Найти сумму четных целых чисел в целочисленном интервале от А до В.
*/
#include <iostream>
using namespace std;
int main(){
    int A, B, res = 0; cin >> A >> B;
    for(int i = A; i < B; ++i)
    {
        if(i%2 == 0) res += i;
    }
    cout << res;
}
