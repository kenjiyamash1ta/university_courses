#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    int n, i = 0;//i - счетчик цикла 
    float x, S = 0, p = 1;
    setlocale(LC_ALL, "rus");
    cout << "Введите х и наибольшую степень n: ";
    cin >> x >> n;
    while(i<=n)
    {
        S+=p; p*= x; ++i;
    }
    cout << "\n\n S = " << S << endl;

    return 0;
}