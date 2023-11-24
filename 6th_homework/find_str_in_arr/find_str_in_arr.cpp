/*
ПОИСК СТРОКИ В МАССИВЕ.
Задан массив строк: char Name[][20] = {"строка1","строка2","строка3"} Определить, содержатся ли в этом массиве дополнительная введеная строка. 
Реализовать функцией, все данные передавать через параметры.
*/
#include <iostream>
#include <string.h>
using namespace std;


bool str_in_arr(char *str, char arr[][20], int size){
    for(int i = 0; i<size; i++)
    if(strcmp(arr[i],str) == 0) 
    return true;
    
    return false;
}

int main(){
    char arr[][20] = {"string1","string2","string3","string4","string5",
                        "string6","string7","string8","string9","string10",
                        "string11","string12","string13","string14","string15"};
    char str1[] = "string1";
    char str2[] = "string0";
    int size = sizeof(arr)/sizeof(arr[1]);
    cout << str_in_arr(str1,arr,size) << endl;
    cout << str_in_arr(str2,arr,size) << endl;
}