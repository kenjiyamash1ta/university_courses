/*
Лотерея. Для заданных в программе результатов розыгрыша лотереи, состоящий в определении двух различных
числе r1, r2 (r1 != r2) определить количество человек угадавших 0, 1, 2 числа. 
Считать, что порядок следования чисел р1, р2 в прогнозе участника значения не имеет
*/
#include <iostream>
using namespace std;

int main(){
    int r1(0), r2(0), p1, p2, human; cin >> human;
    int all, half, zero;
    all = half = zero = 0;
    srand(time(NULL));
    while(r1==r2)
    {
    r1 = rand()%10;
    r2 = rand()%10;
    }

    while(human){
        p1 = p2 = 0;
        p1=rand()%10;
        human--;
        p2=rand()%10;
        if((p1==r2 && p2==r2)||(p1==r2 && p2 == r1)) all++;
        else if(p1 == r2 || p2 == r2 || p1 == r1 || p2 == r1) half++;
        else zero++;
    }

    cout << all << endl << half << endl << zero << endl;
}