/*
Длинная цепочка нулей. Определить максимальное число подряд идущих нулевых элементов в массиве или векторе
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int count = 0, num; double res;
    while(true)
    {
        cout << "\nВведите " << count + 1 << "-ое число(или ctrl+d, чтобы прервать ввод)";
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

        count++;
        vec.push_back(num);
    }
}