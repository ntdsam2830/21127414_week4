#include <stdio.h>

void ham_nhap(int& a, int& b);
void hoan_vi(int& a, int& b);

int main()
{
	int a, b;
	ham_nhap(a, b);
	hoan_vi(a, b);
}
void ham_nhap(int& a,int &b)
{
	printf("nhap so a: ");
	scanf_s("%d", &a);
	printf("nhap so b: ");
	scanf_s("%d", &b);
}
void hoan_vi(int& a, int& b)//dùng 1 biến phụ temp để lưu trữ giá trị a, gán a = b sau đó gán b = giá trị a đã lưu trữ trong temp
{
	printf("Truoc khi hoan doi: a = %d, b = %d", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("\nSau khi hoan doi: a = %d, b = %d\n", a, b);
}
