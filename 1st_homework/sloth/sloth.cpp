/*
Леницвец. Ленивец ползет по вертикальному шесту высотой H метров, поднимаясь за день на А метров, а за
ночь спускаясь на В метров. На какой день ленивец доползет до вершины шеста. Н, А, В - целые, А>В>=0.
*/
#include <iostream>
using namespace std;

int main()
{
    int h, a, b;
    cin >> h >> a >> b;
    int start = a;
    int count = 1;

    while (start < h){
        start = start + a - b;
        count++;
    }

    cout << count;
}