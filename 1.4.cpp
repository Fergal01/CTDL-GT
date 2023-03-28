#include <iostream>
using namespace std;

struct Diem {
    float x, y, z;
};

void NhapDiem(Diem &d) {
    cout << "Nhap toa do x: ";
    cin >> d.x;
    cout << "Nhap toa do y: ";
    cin >> d.y;
    cout << "Nhap toa do z: ";
    cin >> d.z;
}

void XuatDiem(Diem d) {
    cout << "(" << d.x << "," << d.y << "," << d.z << ")";
}

int main() {
    Diem d;
    NhapDiem(d);
    XuatDiem(d);
    return 0;
}

