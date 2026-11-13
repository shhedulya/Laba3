// Задание 4. Ввести aisles и shelves (1..8). Вложенными for вывести адреса хранения A<проход>-S<полка>.
#include <iostream>
#include <clocale>
using namespace std;

void task4()
{
    setlocale(LC_ALL, "Russian");
    int aisles, shelves;
    cout << "Введите число проходов (1..8): ";
    cin >> aisles;
    cout << "Введите число полок (1..8): ";
    cin >> shelves;
    if (aisles < 1 || aisles > 8 || shelves < 1 || shelves > 8)
    {
        cout << "Ошибка ввода" << endl;
        return;
    }
    for (int i = 1; i <= aisles; i++)
    {
        for (int j = 1; j <= shelves; j++)
        {
            cout << "A" << i << "-S" << j << " ";
        }
        cout << endl;
    }
}

int main() {
    task4();
    return 0;
}