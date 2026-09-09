#include <iostream>

using namespace std;

int main() {
    int n;

    do {
        cout << "Nhap so luong hoc sinh N (2 <= N <= 20): ";
        cin >> n;

        // Kiem tra dieu kien n hop le
        if (n < 2 || n > 20) {
            cout << "So luong khong hop le! Vui long nhap lai so luong tu 2 den 20.\n\n";
        }
    } while (n < 2 || n > 20);

    cout << "So luong hoc sinh hop le da nhap: " << n << endl;

    return 0;
}