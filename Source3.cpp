// Задание 3. Через do-while запросить номер секции склада от 1 до 30. После корректного ввода вывести, к какой десятке секций она относится: 1..10, 11..20 или 21..30.
#include <iostream>
#include <clocale>
using namespace std;

void task3()
{
    setlocale(LC_ALL, "Russian");
    int s;
    do
    {
        cout << "Введите номер секции (1..30): ";
        cin >> s;
        if (s < 1 || s > 30)
        {
            cout << "Неверный номер секции" << endl;
        }
    } while (s < 1 || s > 30);
    switch ((s - 1) / 10)
    {
    case 0:
        cout << "Секция относится к 1..10" << endl;
        break;
    case 1:
        cout << "Секция относится к 11..20" << endl;
        break;
    case 2:
        cout << "Секция относится к 21..30" << endl;
        break;
    }
}

/*
int main() {
    task3();
    return 0;
}
*/