#include <iostream>
using namespace std;

int findMinimum(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

int main() {
    int x, y;

        cout << "Masukkan nilai x: ";
        cin >> x;
        cout << "Masukkan nilai y: ";
        cin >> y;

        int minimum = findMinimum(x, y);
            cout << "Nilai terkecil antara " << x << " dan " << y << " adalah: " << minimum << endl;

    return 0;
}
