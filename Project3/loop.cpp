#include <iostream>
#include <Windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using namespace std;

    cout << "������� 1" << endl;

    int count = 0;

    for (int i = 100; i < 1000; ++i) {
        int a = i % 10;
        int b = (i / 10) % 10;
        int c = i / 100;

        if (a == b || a == c || b == c) {
            count++;
        }
    }

    cout << "���������� ����� � ����� ����������� �������: " << count << endl;

    cout << "������� 2" << endl;

    int coun = 0;

    for (int i = 100; i < 1000; ++i) {
        int a = i % 10;
        int b = (i / 10) % 10;
        int c = i / 100;

        if (a != b && a != c && b != c) {
            count++;
        }
    }

    cout << "���������� ����� � ������� �������: " << count << endl;

    cout << "������� 3" << endl;

    int number;
    cout << "������� �����: ";
    cin >> number;

    int result = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;
        number /= 10;

        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10;
        }
    }

    cout << "���������: " << result << endl;

    cout << "������� 4" << endl;

    int a;
    cout << "������� ����� a: ";
    cin >> a;

    for (int B = 1; B <= a; ++B) {
        if (a % (B * B) == 0 && a % (B * B * B) != 0) {
            cout << B << " ";
        }
    }

    cout << "������� 5" << endl;

    int A;
    cout << "������� ����� A: ";
    cin >> A;

    int sum = 0;
    int temp = A;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    int cube_sum = sum * sum * sum;

    if (cube_sum == A * A) {
        cout << "��� ����� ���� ����� A ����� A^2" << endl;
    }
    else {
        cout << "��� ����� ���� ����� A �� ����� A^2" << endl;
    }

    cout << "������� 6" << endl;

    int numb;
    cout << "������� �����: ";
    cin >> numb;

    cout << "�����, �� ������� " << numb << " ������� ��� �������: ";
    for (int i = 1; i <= numb; ++i) {
        if (numb % i == 0) {
            cout << i << " ";
        }
    }


    cout << "������� 7" << endl;

    int num1, num2;
    cout << "������� ������ �����: ";
    cin >> num1;
    cout << "������� ������ �����: ";
    cin >> num2;

    cout << "�����, �� ������� ������� � " << num1 << ", � " << num2 << " ��� �������: ";
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }











    system("pause");
    return 0;
}