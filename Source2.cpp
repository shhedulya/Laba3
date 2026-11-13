// Задание 2. С помощью while вводить количество единиц товара в поставке до ввода 0. Отрицательные значения пропускать. Найти общий объём и число поставок более 50 единиц.
#include <iostream>
#include <clocale>
using namespace std;

void task2()
{
    setlocale(LC_ALL, "Russian");
    int x;
    int sum = 0;
    int count = 0;
    cout << "Введите количество товара (0 - конец): ";
    cin >> x;
    while (x != 0)
    {
        if (x > 0)
        {
            sum = sum + x;
            if (x > 50)
            {
                count++;
            }
        }
        cout << "Введите количество товара (0 - конец): ";
        cin >> x;
    }
    cout << "Общий объём: " << sum << endl;
    cout << "Поставок больше 50 единиц: " << count << endl;
}

/*
int main() {
    task2();
    return 0;
}
*/