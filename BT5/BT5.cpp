#include <stdio.h>

void ham_nhap(int& n);
void tim_so_le_dau_tien(int N);

int main()
{
	int N;
	ham_nhap(N);
	tim_so_le_dau_tien(N);
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
void tim_so_le_dau_tien(int N)
{
	int temp = 0, so_le = 0;
	while (N != 0)
	{
		temp = N % 10;
		if (temp % 2 != 0)
			so_le = temp;
		N /= 10;
	}
	printf("so le dau tien la: %d\n", so_le);
}
