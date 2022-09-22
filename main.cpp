#include <iostream>
using namespace std;

/**
 * ����� ����������� ����� � �������������� ����������������:
 * ����� - ����� � �������. �� ����� �������, ���������� � ����,
 * � ��������� � �������� �� ������ ���� � ������ ��������
 * ������: "������� �������, ��������� ������� ������� �����"
 * �������: "���.����.����, .... ������"
 * ������: "��, ��� ������� �������, ��� ������, ���������, ������� !"
 * �������: "����.����.����.����.����..��� - �����������"
 * ������: "�� ��� ������, ����� ����� ����� ������� �����"
 * �������: "����� .. ����... ���� ... ��� ������ �����, �� ����� ��� ���������� !!!"
 * (������ ������ �� "��������� ������")
 *
 */

void evenCounter (long long number, int &counter) {

    if (number == 0) return;
    long long checkEven = (number % 10) % 2;
    if (checkEven == 0) ++counter;
    long long nextNumber = number / 10;
    evenCounter(nextNumber, counter);
}

int main() {

    setlocale(LC_ALL, "Russian_Russia.1251");

    int answer = 0;
    long long guessNumber;
    cout << "������� ������� (!) ����� ? = ";
    cin >> guessNumber;

    evenCounter(guessNumber, answer);
    cout << "��� �����: " << answer << endl;

    return 0;
}
