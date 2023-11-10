/*
Усеченное среднее. Найти среднее арифметическое тех элементов массива или вектора, которые не совпадают ни с
минимальным, ни с максимальным из его элементов. Например, для массива int x[]={5,7,3,-1,4,-1,7};
результат = (5+3+4)/3 = 4
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

double truncated_mean(const vector<int> vec){
    vector<int> temp = vec;
    auto min = min_element(temp.begin(), temp.end());
    auto max = max_element(temp.begin(), temp.end());
    remove_if(temp.begin(), temp.end(), [min,max](const int i){
        return i == *min || i == *max;
    });
    double accum = double(accumulate(temp.begin(), temp.end(), 0));
    double sizee = temp.size();
    double res = accum/sizee;
    return res;
}

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
        
    res = truncated_mean(vec);  
    cout << "\nСреднее усеченное: " << res << endl; 
}