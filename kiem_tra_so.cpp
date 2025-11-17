#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    if (n > 0) {
        cout << n << " la so duong." << endl;
    } else if (n < 0) {
        cout << n << " la so am." << endl;
    } else {
        cout << "So ban nhap la 0." << endl;
    }

    return 0;
}
