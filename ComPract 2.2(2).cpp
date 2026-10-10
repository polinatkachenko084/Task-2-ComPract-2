#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  //коротка форма розгалудження if 

    double x = 0, f = 0, y = 0, t = 0;
    char type;
    bool ok = false;

    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть тип робіт (A, B або C, великою латиницею): ";
    cin >> type;

    if (type == 'A') {
        f = fabs(sin(x) / 3.124 - cos(x * x)) - 8.3 * sin(3 * x);
        y = 100 * fabs(f + 50);
        t = 0.10;
        ok = true;
    }
    if (type == 'B') {
        f = fabs(cos(2 * x)) / 1.12 - cos(3 * x - 2) + 6.15;
        y = 150 * fabs(f + 100);
        t = 0.15;
        ok = true;
    }
    if (type == 'C') {
        f = sin(x) * pow(cos(x), 2) * sin(x + 1.4) / 0.85 + 7.14;
        y = 100 * fabs(f + 135);
        t = 0.20;
        ok = true;
    }

    if (ok) {
        double tax = y * t;
        double payment = y - tax;
        cout << "\nНарахована сума:  " << y << endl;
        cout << "Сума податку:     " << tax << endl;
        cout << "Сума до видачі:   " << payment << endl;
    }
    if (!ok)
        cout << "\nПомилка: неправильний тип робіт! Допустимо лише A, B або C." << endl;
    }
}