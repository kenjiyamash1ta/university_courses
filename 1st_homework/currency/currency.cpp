/*
Валюта. написать программу пересчета суммы в рублях в доллары и обратно по заданному в программе курсу. Значение курса нужно задать
в виде именованной константы. Желательно, чтобы порограмма вначале задавала вопрос о направлении пересчета и анализировала полученный
ответ ( пусть ответ вводится как +1 - доллары в рубли или -1 - рубли в доллары)
*/


#include <iostream>
using namespace std;

class Converter{
public:
    void Collebrate_Converter(){
        do {
            cout << "Введите режим обмена валют.\n1 - Доллары в рубли.\n-1 - Рубли в Доллары\n";
            cin >> this->mode;
        } while (!(mode == 1 || mode == -1));
    }

    double Convert();

    void Print_result();

private:
    int mode = 0;
    double currency = 0;
    const double EXCHANGE_RATE = 100.49;
    double result = 0;
};

double Converter::Convert() {

    cout << "Введите сумму, которую необходимо конвертировать.\n";
    cin >> this->currency;

    if (mode == 1) {
        this->result = this->currency * this->EXCHANGE_RATE;
        return this->result;
    }
    else
    {
        this->result = this->currency / this->EXCHANGE_RATE;
        return this->result;
    }
}
void Converter::Print_result() {
    cout << currency;
    this->mode == 1 ? cout << " долларов" : cout << " рублей";
    cout << " = " << result;
    this->mode == 1 ? cout << " рублей" : cout << " долларов";
}

int main() {
    setlocale(LC_ALL, "rus");
    Converter conv;
    conv.Collebrate_Converter();
    double result = conv.Convert();
    conv.Print_result();
    return 0;
}