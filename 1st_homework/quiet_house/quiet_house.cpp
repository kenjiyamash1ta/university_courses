#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int houses = 0, noise = -1;
    while(houses < 2){
        cout << "Число домов на улице должно быть больше 1\n";
        cout << "Введите количество домов на улице: " << endl;
        cin >> houses;}
    vector <int> street;
    street.resize(houses);
    for (int i:street) {i = 0;}
    while (noise != 0)
    {
        cout << "Введите 0, если больше источников шума нет.\n";
        cout << "Введите номер шумного дома: ";
        cin >> noise;
        if(noise <= houses && noise > 0)
        street[noise-1] = houses;
        else if(noise<0 && noise>houses)
        cout << "\nВведите число от 0 до " << houses << endl;
    }

    
    for(int i = 0; i < houses; i++){
        if(street[i] == houses && i != houses - 1 && street[i+1] != houses){
        street[i+1] = houses - 1;}
        if(street[i] == street[i-1] - 1 && i != houses - 1 && street[i+1] != houses){
        street[i+1] = street[i] - 1;
        }
        
    }
    for(int i = houses - 1; i != 0; i--){
        if(street[i] == houses && i != 0 && street[i-1] != houses) {
            street[i-1] = houses - 1;}
        if(street[i] == street[i+1] - 1 && street[i-1] < street[i] - 1 && street[i-2] != houses && street[i-2] != street[i] && street[i-1]!= street[i]){
            street[i-1] = street[i] - 1;
        }
    }
    
    int answer = min_element(street.begin(), street.end()) - street.begin() + 1;

    for(int i:street) cout << i << " ";

    cout << "\n Самый тихий дом по адресу: " << answer << endl;

}