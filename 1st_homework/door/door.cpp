#include <iostream>
#include <algorithm>
using namespace std;

class Box{
    public:
    void SetBox(double x,double y,double z); 
    double GetX();
    double GetY();
    double GetZ();

    private:
    double x, y, z;
};

class Door{
    public:
    void SetDoor(double x,double y);
    bool BoxtoDoor(Box box);
    private:
    double x, y;
};

void Box::SetBox(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}
double Box::GetX(){return x;}
double Box::GetY(){return y;}
double Box::GetZ(){return z;}

void Door::SetDoor(double x, double y){
    this->x = x;
    this->y = y;
}
bool Door::BoxtoDoor(Box box)
{
    double doorxy[] = {x,y};
    double boxxyz[] = {box.GetX(), box.GetY(), box.GetZ()};
    sort(begin(doorxy), end(doorxy));
    sort(begin(boxxyz), end(boxxyz));
    return doorxy[0] >= boxxyz[0] && doorxy[1] >= boxxyz[1];
}

void SettingBox(Box &box){
    cout << "Размеры ящика X Y Z";
    double x,y,z;
    cout << "\nX: "; cin >> x;
    cout << "\nY: "; cin >> y;
    cout << "\nZ: "; cin >> z;
    box.SetBox(x,y,z);
}
void SettingDoor(Door &door){
    cout << "Размеры двери X Y";
    double x,y;
    cout << "\nX: "; cin >> x;
    cout << "\nY: "; cin >> y;
    door.SetDoor(x,y);
}
void PrintResultBtD(bool fit){
    fit? cout << "\nЯщик поместиться в дверь.": cout << "\nЯщик в дверь не поместиться"; 
}

int main(){
    Box box;
    Door door;
    SettingBox(box);
    SettingDoor(door);
    bool fit = door.BoxtoDoor(box);
    PrintResultBtD(fit);
    return 0;
}