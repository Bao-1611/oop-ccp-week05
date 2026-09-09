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

    double scores[20];

    cout << "\n--- NHAP DIEM SO HOC SINH ---\n";

      // Loop de nhap diem cho tung hoc sinh
    for (int i = 1; i <= n; i++) {
        double diem;

        // dung do-while de kiem tra diem hop le
        do {
            cout << "Nhap diem cho hoc sinh " << i << " (0 <= diem <= 10): ";
            cin >> diem;

            if (diem < 0.0 || diem > 10.0) {
                cout << "Diem khong hop le! Diem phai tu 0 den 10. Vui long nhap lai.\n\n";
            }
        } while (diem < 0.0 || diem > 10.0);

        // Luu diem vao array (index bat dau tu 0)
        scores[i - 1] = diem;
    }

    cout << "\n--- DANH SACH DIEM DA NHAP ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Hoc sinh " << (i + 1) << ": " << scores[i] << " diem\n";
    }
    
    return 0;
}