/*
Равновесие.Для шести введенных целых чисел без знака нужно как можно проще выяснить, 
совпадает ли количество четных чисел с числом нечетных. 
Указание: подумайте над использованием побитовых операций: &, |, ^, ~.
*/
#include <iostream>
using namespace std;

int main(){
    const int SIZE = 6;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++){
        cin >> arr[i];
    }

    int count = 0;

    for(int i = 0; i < SIZE;i++){
        int temp = arr[i] & 1;
        if(temp == 0) count++;
    }

    cout << (count == 3) << endl;
}