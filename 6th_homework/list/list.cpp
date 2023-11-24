/*
СПИСОК.
Вводиться список фамилий N работников и их стаж(фамилии должны быть размещены в массиве строк, а значения стажа - в элементах целочисленного массива)
Необходимо, чтобы программа выполняла одно из трех действий:
(a) по введеной фамилии работника определяла его стаж
(б) по введеному стажу определяла перечень фамилий с таким стажем
(в) выводила список фамилий с наибольщим стажем 
Реализуйте их на функциях. 
В слачаях (b),(c) функции должны возвращать векторы указателей на выделенные фамилии, либо векторы порядковых номеров выделенных фамилий
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string>::iterator findSurname(std::vector<std::string>& surnames, std::string surname) {
    auto it = std::find(surnames.begin(), surnames.end(), surname);
    return it;
}

std::vector<int>::iterator findExperience(std::vector<int>& experiences, int experience) {
    auto it = std::find(experiences.begin(), experiences.end(), experience);
    return it;
}

std::vector<int> getIndicesOfMaxExperience(std::vector<int>& experiences) {
    std::vector<int> maxIndices;

    int maxExperience = *std::max_element(experiences.begin(), experiences.end());
    for (size_t i = 0; i < experiences.size(); ++i)
        if (experiences[i] == maxExperience)
        maxIndices.push_back(i);
    return maxIndices;
}

int main() {
    setlocale(LC_ALL, "rus");
    int N;
    std::cout << "Введите количество работников: ";
    std::cin >> N;

    std::vector<std::string> surnames(N);
    std::vector<int> experiences(N);

    std::cout << "Введите имена работников и опыт:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> surnames[i] >> experiences[i];
    }

    char choice;
    std::cout << "Введите выбор: ";
    std::cin >> choice;

    switch(choice)
    {
    case 'a':
    {
        std::cout << "Введите фамилию: ";
        std::string surname;
        std::cin >> surname;

        auto it = findSurname(surnames, surname);
        if (it != surnames.end()) {
            int index = std::distance(surnames.begin(), it);
            std::cout << "Опыт " << surname << " равен " << experiences[index] << std::endl;
        } 
        else 
            std::cout << "Фамилия не найдена" << std::endl;
        break;
    }
    case 'b':
    {
        std::cout << "Введите опыт: ";
        int experience;
        std::cin >> experience;

        auto it = findExperience(experiences, experience);
        if (it != experiences.end()){
            int index = std::distance(experiences.begin(), it);
            std::cout << "Работники с опытом " << experience << ": " << surnames[index] << std::endl;
        } 
        else {
            std::cout << "Нет работников с таким опытом " << experience << std::endl;
        }
        break;
    }
    case 'c':
    {
        std::vector<int> maxIndices = getIndicesOfMaxExperience(experiences);
        std::cout << "Работники с наибольшим опытом:" << std::endl;
        for (int index : maxIndices)
            std::cout << surnames[index] << std::endl;
        break;
    }
    default:
        std::cout << "Неверный выбор." << std::endl;
        break;
    }

    return 0;
}
