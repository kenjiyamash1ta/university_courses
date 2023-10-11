#include <iostream>
using namespace std;

class Date
{
    public:
    Date(int day, int month);
    Date(){this->day = 0, this->month = 0;}
    void SetDate(int day, int month);
    friend bool operator==(const Date& left, const Date& right);
    friend bool operator>(const Date& left, const Date& right);
    private:
    int day;
    int month;  
};

Date::Date(int day, int month){
    this->day = day;
    this->month = month;
}
void Date::SetDate(int day, int month)
{
    this->day = day;
    this->month = month;
}

bool operator==(const Date& left, const Date& right) 
{
    return left.day == right.day && left.month == right.month;
}
bool operator!=(const Date& left, const Date& right)
{
    return !(left == right);
}
bool operator>(const Date& left, const Date& right) 
{
    return left.month*31+left.day > right.month*31+right.day;
}
bool operator>=(const Date& left, const Date& right)
{
    return left == right || left > right;
}
bool operator<(const Date& left, const Date& right)
{
    return !(left>=right);
}
bool operator<=(const Date& left, const Date& right)
{
    return !(left>right);
}

void CinDate(Date& date){
    cout << "\nДата:";
    int x = 0,y = 0;
    while(x < 1 || x > 31)
    {
    cout << "\nДень(1-31): "; cin >> x;
    }
    while(y<1 || y>12)
    {
    cout << "\nМесяц(1-12): "; cin >> y;
    }
    date.SetDate(x,y);
}

int main(){
    setlocale(LC_ALL, "rus");
    Date date1;
    cout << "\nПервая дата:";
    CinDate(date1);
    Date date2;
    cout << "\nВторая дата:";
    CinDate(date2);
    if (date1 == date2)
    {
        cout << "\nДаты совпадают";
    }
    else if (date1 < date2)
    {
        cout << "\nПервая дата была раньше";
    }
    else
    {
        cout << "\nВторая дата была раньше.";
    }
    return 0;
}