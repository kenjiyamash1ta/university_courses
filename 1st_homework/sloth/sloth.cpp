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