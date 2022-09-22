#include <iostream>
using namespace std;

/**
 * Сразу вспомнилась армия и художественная самодеятельность:
 * Номер - фокус с числами. На сцене рядовой, обращается к залу,
 * в частности к сидящему на первом ряду в центре генералу
 * солдат: "товарищ генерал, загадайте большое большое число"
 * генерал: "ммм.мммм.мммм, .... восемь"
 * солдат: "да, нет товарищ генерал, еще больше, загадайте, большое !"
 * генерал: "мммм.мммм.мммм.мммм.мммм..ммм - одиннадцать"
 * солдат: "да ище больше, очень очень очень большое число"
 * генерал: "ммммм .. ыыыы... уууу ... это плохой номер,
 *                хватит, не нужно его больше показывать !!!"
 * (ранние VHS записи "осторожно модерн" - есть на торрентах)
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

    int answer = 0;
    long long guessNumber;
    cout << "Введите большое (!) число ? = ";
    cin >> guessNumber;

    evenCounter(guessNumber, answer);
    cout << "Наш ответ: " << answer << endl;

    return 0;
}
