#include <iostream>
using namespace std;

struct DonThuc {
    float a;
    int n;
};

void NhapDonThuc(DonThuc &dt) {
    cout << "Nhap he so a: ";
    cin >> dt.a;
    cout << "Nhap so mu n: ";
    cin >> dt.n;
}

void XuatDonThuc(DonThuc dt) {
    cout << dt.a << "x^" << dt.n;
}

int main() {
    DonThuc dt;
    NhapDonThuc(dt);
    XuatDonThuc(dt);
    return 0;
}

