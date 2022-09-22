#include <iostream>
#include <vector>
using namespace std;

void swap (int &a, int &b) {
    int x = a;
    a = b;
    b = x;
}

void swapVector (vector<int> &a, int* b) {

    int size = a.size();
    for (int i = 0; i < size; i++)
        swap(a[i],*(b + i));
}

int main() {

    vector<int> a {1,2,3,4,5};
    int b[] {10,20,30,40,50};

    cout << "Было:\ta = ";
    for (int i : a) cout << i << " ";
    cout << "\n\tb = ";
    for (int i : b) cout << i << " ";
    cout << endl << endl;

    swapVector(a,b);

    cout << "Стало:\ta = ";
    for (int i : a) cout << i << " ";
    cout << "\n\tb = ";
    for (int i : b) cout << i << " ";
    cout << endl << endl;

    return 0;
}
