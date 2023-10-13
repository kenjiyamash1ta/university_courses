#include <iostream>
using namespace std;

class Box{
public:
    Box(int product, int capacity);

    void SetCapacity(int capacity);
    void SetValue(int value_boxes);
    void SetFilling(int filling_last_box);

    int GetCapacity();
    int GetValue();
    int GetFilling();


private:
    int capacity;
    int value_boxes;
    int filling_last_box;
};

Box::Box(int product, int capacity)
{
    this->capacity = capacity;
    this->value_boxes = product/capacity;
    this->filling_last_box = product - value_boxes*capacity;
}

void Box::SetCapacity(int capacity)
{
    this->capacity = capacity;
}
void Box::SetValue(int value_boxes)
{
    this->value_boxes = value_boxes;
}
void Box::SetFilling(int filling_last_box)
{
    this->filling_last_box = filling_last_box;
}

int Box::GetCapacity() {return this->capacity;}
int Box::GetValue() {return this->value_boxes;}
int Box::GetFilling() {return this->filling_last_box;}

int main(){
    setlocale(LC_ALL, "rus");
    int capacity, product;
    cout << "ВВедите количество товара и емкость ящиков:";
    cout << "\nКоличество товара: ";
    cin >> product;
    cout << "\nЕмкость ящиков: ";
    cin >> capacity;
    
    Box box(product, capacity);

    cout << "\nЕмкость ящиков: " << box.GetCapacity()
    << "\nЗаполненность последнего: " << box.GetFilling()
    << "\nКоличество полностью заполненных ящиков: " << box.GetValue() << endl;
    return 0;
}

