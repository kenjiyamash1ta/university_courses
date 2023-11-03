/*
Непрерывная дробь. По введенному целому N вычислить (1/(2+1/(3+1/(4+...1/N-1+1/N)...))))
*/
#include <iostream>
using namespace std;

int main(){
    int num; cin >> num;
    float res = float(num);
    for(int i = 1; i < num;i++)
    {
        res = (num-i) / res;
    }
    cout << res;
}