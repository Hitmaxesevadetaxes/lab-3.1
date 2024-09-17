// lab 3.1 .cpp
// ������ ������
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 2

#include <iostream>
#include <cmath> // ��� ������������ ������� 
#include <Windows.h> // ��������� ����
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    double x, y; // ���������� ������ ��� x � y

    // �������� �������� x
    cout << "������ �������� x: ";
    cin >> x;

    // ������������
    if (x < 1) {
        // ���� x ����� 1
        y = 0.65 * x + 8;
    }
    else if (x >= 1 && x < 5) {
        
        y = 1 / x + 4 - atan((x + 6.1) / 2) + exp(x);
    }
    else {
        // ���� x ����� ��� ������� 5
        y = sqrt(1 + sqrt(x));
    }

    
    cout << "�������� y: " << y << endl;

    return 0; 
}
