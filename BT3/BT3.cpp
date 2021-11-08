#include<stdio.h>

void ham_nhap(int& n);
void tinh_tong(int n);

int main()
{
	int n;//n la input
	ham_nhap(n);
	tinh_tong(n);
	return 0;
}
void ham_nhap(int& n)
{
	do
	{
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
		if (n <= 0) 
			printf("Vui long nhap lai !\n");
	} while (n <= 0);
}
void tinh_tong(int n)
{
	int s = 0;//khoi tao bien s de luu gia tri can tinh
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			s += i;
	}
	printf("Tong cac so chan tu 1 den %d la: %d\n", n, s);
}
