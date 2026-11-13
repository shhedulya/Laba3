// Задание 1. Ввести n (1..20) - число коробок. С помощью for вывести массу коробки i по формуле 2 + 0.5*i и общую массу.
#include <iostream>
#include <clocale>
using namespace std;

void task1() {
    setlocale(LC_ALL, "Russian");
    int n;
    double m;
    double sum = 0;
    cout << "Введите количество коробок (1..20): ";
    cin >> n;
    if (n < 1 || n > 20)
    {
        cout << "Ошибка ввода" << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        m = 2 + 0.5 * i;
        cout << "Коробка " << i << ": " << m << endl;
        sum = sum + m;
    }
    cout << "Общая масса: " << sum << endl;
}


/*
int main()
{
    task1();
    return 0;
}
*/