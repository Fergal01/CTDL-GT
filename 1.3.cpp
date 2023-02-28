#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct ToaDo{
    char Diem;
    float a,b;
};
typedef struct ToaDo TD;

void Nhap(TD &c)
{
    printf("Hay nhap ten diem:");
    scanf("%c",&c.Diem);
    char Diem1= toupper(c.Diem);
    printf("Hay nhap hoanh do:");
    scanf("%f",&c.a);
    printf("Hay nhap tung do:");
    scanf("%f",&c.b);
}
void Xuat(TD c, char Diem1)
{
    printf("%c(%.1f;%.1f)",Diem1,c.a,c.b);
}
int main()
{
    TD cc;
    Nhap(cc);
    Xuat(cc, char Diem1);
    return 0;
}
