/*
Вклад. Как увеличиться вклад S, положенный под A процентов годовых, за N месяцев при помесячном начислении процентов? 
*/
#include <iostream>
using namespace std;

int main(){
    float A, S; int N, i = 0;

    cin >> S >> A >> N;
    
    while(i<N)
    {
        i++;
        S += (S*(A/100))/12;
    }
    cout << S;
}