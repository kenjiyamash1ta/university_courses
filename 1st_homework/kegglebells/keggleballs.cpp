/*
Гири. Имеется набор гирь известного веса. Разложить гири по двум чашам весов так, чтобы разница в весе
оказалась минимальной.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    int n = 0;
    vector <int> input, left, right;
    while(n>=0)
    {   
        cout << "Введите массу гири(-1 если гирь больше нет)";
        cin >> n;
        if(n>0)
        input.push_back(n);
    }

    sort(input.begin(), input.end());

    while(!input.empty()){
    n = input.back();
    if(accumulate(left.begin(), left.end(), 0) >= accumulate(right.begin(), right.end(), 0))
    {
        right.push_back(n);
        input.pop_back();
    }
    else
    {
        left.push_back(n);
        input.pop_back();
    }
    }

    cout << "Гири на левой чаше: ";
    for(int i:left){
        cout << i << " ";
    }
    cout << endl << "Гири на правой чаше: ";
    for(int i:right){
        cout << i << " ";
    }

    return 0;
}