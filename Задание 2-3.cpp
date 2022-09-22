#include <iostream>
using namespace std;

int minValue(int a, int b) {
    if (a < b) return a;
    return b;
}

int seekWay (int numSteps, int keySteps) {

    if (numSteps == 0) return 1;
    int counter = 0;
    for (int i = 1; i <= minValue(numSteps, keySteps); ++i)
        counter += seekWay(numSteps - i, keySteps);
    return counter;
}

int main() {

    int numberSteps;
    int maxJump = 3;    // для задания №2
    cout << "На сколько ступенек нужно подняться кролику ? = ";
    cin >> numberSteps;
    // для задания №3 ввод количества ступенек в прыжке кролика
    cout << "Максимальное количество ступенек прыжка ? = ";
    cin >> maxJump;

    cout << "Наш ответ: " << seekWay(numberSteps, maxJump) << endl;

    return 0;
}
