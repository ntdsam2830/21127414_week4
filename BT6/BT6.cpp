#include <stdio.h>

void ham_nhap(int& n);
void dem_so_le(int N);

int main()
{
	int N;
	ham_nhap(N);
	dem_so_le(N);
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
void dem_so_le(int N)
{
	int count = 0;//khởi tạo biến đếm
	for (size_t i = 0; i <= N; i++)
	{
		if (i % 2 != 0)//mỗi lần đúng với điều kiện, biến đếm sẽ tăng lên 1
			count++;
	}
	printf("co %d so le trong khoang tu 0 den %d\n", count, N);
}
