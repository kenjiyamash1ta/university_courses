/*
ИНВЕРСИЯ. разместить элементы заполненного числами массива или вектора в обратном порядке.
*/
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
void reverse(vector<T> &vec){
    vector<T> temp;
    for(auto it = vec.rbegin(); it != vec.rend(); it++) temp.push_back(*it);
    vec = temp;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    for(int i:vec) cout << i << " ";
    reverse(vec);
    cout << endl;
    for(int i:vec) cout << i << " ";
}