// lab 3.1 .cpp
// Боднар Данило
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 2

#include <iostream>
#include <cmath> // Для математичних функцій 
#include <Windows.h> // українська мова
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    double x, y; // Оголошення змінних для x і y

    // Введення значення x
    cout << "Введіть значення x: ";
    cin >> x;

    // Розгалуження
    if (x < 1) {
        // Якщо x менше 1
        y = 0.65 * x + 8;
    }
    else if (x >= 1 && x < 5) {
        
        y = 1 / x + 4 - atan((x + 6.1) / 2) + exp(x);
    }
    else {
        // Якщо x більше або дорівнює 5
        y = sqrt(1 + sqrt(x));
    }

    
    cout << "Значення y: " << y << endl;

    return 0; 
}
