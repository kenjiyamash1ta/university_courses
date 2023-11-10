/*
Доходы. Вводятся уровни доходов за N месяцев(N<=12). Нужно сохранить и вывести номера месяцев, в которых уровень 
доходов был выше его среднего значения. Для хранения введеных доходов используйте массив или вектор с 12 элементами
*/
#include <vector>
#include <iostream>
#include <numeric>
#include <map>
using namespace std;

double avgVec(const vector<double> &v)
{
    return v.empty()? 0.0 : 
    accumulate(v.begin(), v.end(), 0.0) / v.size();
}

int main(){
    vector<double> vec;
    vector<int> mounth;
    int count = 0, num;
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

    double avg = avgVec(vec);
    for(int i = 0;i<vec.size();++i)
    {
        if(vec.at(i) > avg) mounth.push_back(i+1); 
    }

    cout << "\n\nМесяца с доходом больше среднего: \n";
    for(int i: mounth)
    {
        cout << i << ' ';
    }
    cout << "\n\n";
}