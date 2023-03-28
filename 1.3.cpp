#include<iostream>
#include<ctype.h>
using namespace std;

struct ToaDo{
    char Diem;
    float a,b;
};

typedef struct ToaDo TD;

void Nhap(TD &c)
{
    cout << "Hay nhap ten diem: ";
    cin >> c.Diem;
    char Diem1 = toupper(c.Diem);
    cout << "Hay nhap hoanh do: ";
    cin >> c.a;
    cout << "Hay nhap tung do: ";
    cin >> c.b;
}

void Xuat(TD c, char Diem1)
{
    cout << Diem1 << "(" << c.a << ";" << c.b << ")";
}

int main()
{
    TD cc;
    Nhap(cc);
    char Diem1 = toupper(cc.Diem);
    Xuat(cc, Diem1);
    return 0;
}

