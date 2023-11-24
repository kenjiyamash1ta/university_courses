/*
Сжатие. Удалить в массиве или векторе все повторяющиеся элементы, оставив каждый элемент по одному разу
*/
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> vec;
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

    for(int i = 0; i<vec.size()-1;++i)
    for(int j = i+1;j<vec.size();++j)
        if(vec[j]==vec[i])
        {
        vec[j]=vec[vec.size()-1];
        vec.pop_back();
        j--;
        }

    cout << "\n\n";
    for(int i: vec)
    {
        cout << i << ' ';
    }
    cout << "\n\n";
}
