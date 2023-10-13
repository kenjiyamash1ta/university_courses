#include <iostream>
#include <math.h>
using namespace std;

class Rectangle {
    public:
    Rectangle(int len, int width);
    int GetLen(){return this->len;}
    int GetWidth(){return this->width;}

    private:
    int len, width;
};

Rectangle::Rectangle(int len, int width)
{
    this->len=len;
    this->width=width;
};

int SmallOnBig(Rectangle& small, Rectangle& big){
    return big.GetLen()/small.GetLen()*big.GetWidth()/small.GetWidth();
}
int SmallOnBigRotate(Rectangle& small, Rectangle& big){
    return big.GetLen()/small.GetWidth()*big.GetWidth()/small.GetLen();
}

int main(){
    setlocale(LC_ALL, "rus");
    int len, width;
    cout << "Введите длину и ширину заготовки: ";
    cin >> len;
    cin >> width;
    Rectangle small(len,width);
    cout << "\nВведите длину и ширину листа: ";
    cin >> len;
    cin >> width;
    Rectangle big(len,width);
    cout <<  SmallOnBig(small,big) << " или " << SmallOnBigRotate(small,big) << " в зависимости от размещения заготовок";


    return 0;
}
