/*
Нечетность четных.Для пяти введенных целых чисел без знака нужно как можно проще выяснить, 
является ли количество четных чисел нечетным. 
Указание: подумайте над использованием побитовой операции ^.
*/
#include <iostream>
using namespace std;

int main(){
    const int SIZE = 5;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++){
        cin >> arr[i];
    }
    
    int res = 0;
    for(int i = 0; i < SIZE;i++){
        res = res ^ arr[i];
    }
    res = res & 1;
    res? cout << "четное количество четных чисел.\n"
    : cout << "нечетное количество четных чисел\n";
}