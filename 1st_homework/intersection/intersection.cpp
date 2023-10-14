/*
Пересечение. Найти прямоугольник, являющийся пересечением двух окон на экране, заданных парами координат двух
противоположных вершин a и b, с и d.
*/
#include <iostream>

using namespace std;

// просто две координаты
struct vec {
    int x, y;
};

class box {
    // левая нижняя и правая верхняя точки
    vec pos1, pos2;

public:
    // ширина и высота, чтобы вторая точка
    //     была не ниже и не выше первой
    box (int x, int y, int w, int h) {
        pos1.x = x;
        pos1.y = y;
        pos2.x = x + w;
        pos2.y = y + h;
    }

    box () {
        // в случае, если не пересекаются, будут нули
        pos1.x = pos1.y = 0;
        pos2.x = pos2.y = 0;
    }

    // поиск пересечения
    box cross (box &another) {
        box result;
        // ящик, потенциально ниже и левее второго
        box *low = this;
        // ящик, потенциально выше и правее первого
        box *high = &another;
        if (another.pos1.x < pos1.x) {
            low = &another;
            high = this;
        }
        // проверки, что ящики пересекаются
        if (high->pos1.x < low->pos2.x) {
            if (low->pos1.y <= high->pos1.y) {
                if (high->pos1.y < low->pos2.y) {
                    // вычисление регулирующих значений
                    result.pos1.x = max(low->pos1.x, high->pos1.x);
                    result.pos1.y = max(low->pos1.y, high->pos1.y);
                    result.pos2.x = min(low->pos2.x, high->pos2.x);
                    result.pos2.y = min(low->pos2.y, high->pos2.y);
                }
            }
        }
        return result;
    }

    // вывод крайних точек ящика
    void print () {
        cout << "x1: " << pos1.x << " y1: " << pos1.y << " x2: " << pos2.x << " y2: " << pos2.y << "\n";
    }
};

int main() {
    cout << "первый прямоугольник, введите x1, y1, x2, y2: ";
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    box a(x1, y1, x2, y2);
    cout << "второй прямоугольник, введите x1, y1, x2, y2: ";
    cin >> x1 >> y1 >> x2 >> y2;
    box b (x1, y1, x2, y2);
    cout << "A: ";
    a.print();
    cout << "B: ";
    b.print();
    box c = a.cross(b);
    cout << "C: ";
    c.print();
    return 0;
}