#include <iostream>
#include <locale>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    float S = 0, x; int count = 0;
    while(true)
    {
        cout << "\nВведите " << count + 1 << "-oe число(или ctrl+d, чтобы прервать ввод)";
        cin >> x;
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

        S+= x*x;
        ++count;
    }
        S = pow(S, 1.0/count);
        cout << "\nРезультат: " << S << endl;
}