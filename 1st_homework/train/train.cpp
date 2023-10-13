#include <iostream>
#include <cmath>
#include <cstdlib>
#include <locale>

//#define HOURE 60
//#define DAY_DURATION 24
#define DAY DAY_DURATION*HOURE
#define MINUTES(m,h) m+h*HOURE
using namespace std;

int main(){ 
    setlocale(LC_ALL, "Russian");
    const int HOURE = 60;
    const int DAY_DURATION = 24;
    constexpr int day = DAY_DURATION * HOURE;
    auto doAction = []() {
       int ms, hs, mtr, htr;
       std::cout << "ms, hs, mtr, htr: ";
       std::cin >> ms >> hs >> mtr >> htr;
       int tFin       //=(ms+mtr)+(hs+htr)*HOURE;
                      = MINUTES(ms + mtr, hs + htr);
       std::cout << "\n\nВремя прибытия: " 
          << (tFin % DAY) / HOURE << " часов и " 
          << tFin % HOURE << " минут."<< std::endl;
        };
doAction();
return 0;
}