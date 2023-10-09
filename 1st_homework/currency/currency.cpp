<<<<<<< HEAD
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
=======
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
    this->mode == 1 ? cout << " рублей\n" : cout << " долларов\n";
}

int main() {
    setlocale(LC_ALL, "rus");
    Converter conv;
    conv.Collebrate_Converter();
    double result = conv.Convert();
    conv.Print_result();
    return 0;
>>>>>>> de376dac436c0ef6b7353eb8c3fbaf87f11b41e5
}