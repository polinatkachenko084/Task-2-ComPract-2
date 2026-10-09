#include <iostream>
#include <cmath>
#include <windows.h>
    using namespace std;

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        double x = 0;            
        double f = 0;        
        double y = 0;       
        double t = 0;        
        char type;           
        bool isCorrect = true;   

        cout << "Введіть суму: ";
        cin >> x;
        cout << "Введіть номер функції (A, B або C): ";
        cin >> type;

        if (type == 'A' || type == 'a') {
            f = fabs(sin(x) / 3.124 - cos(x * x)) - 8.3 * sin(3 * x);
            y = 100 * fabs(f + 50);
            t = 0.10;
        }
        else if (type == 'B' || type == 'b') {
            f = fabs(cos(2 * x)) / 1.12 - cos(3 * x - 2) + 6.15;
            y = 150 * fabs(f + 100);
            t = 0.15;
        }
        else if (type == 'C' || type == 'c') {
            f = sin(x) * pow(cos(x), 2) * sin(x + 1.4) / 0.85 + 7.14;
            y = 100 * fabs(f + 135);
            t = 0.20;
        }
        else {
            isCorrect = false;   
        }

        if (isCorrect == true) {
            double taxSum = y * t;         
            double payment = y - taxSum;  
            cout << " Нарахована сума: " << y << endl;
            cout << "Сума податків: " << taxSum << endl;
            cout << "Сума до сплати: " << payment << endl;
        }
        else {
            cout << "\nПомилка: неправильий вибір змінної! Допустимо лише A, B або C." << endl;
        }
    }