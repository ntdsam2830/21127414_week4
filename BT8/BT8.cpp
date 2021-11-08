#include<stdio.h>
#include<math.h>

bool kt_so_chinh_phuong(int n);//hàm kt số chính phương
void tong_so_chinh_phuong(int n, int& s1);//hàm tính tổng số chính phương
void tong_so_le(int n, int& s2);
void ham_nhap(int& n);

int main()
{
	int n;
	ham_nhap(n);
	tong_so_chinh_phuong(n);
	tong_so_le(n);
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

bool kt_so_chinh_phuong(int n)
{
	int SQRT = sqrt(n);
	if (SQRT * SQRT == n)//neu nhu can bac 2 cua so n là so nguyên thì n là so chính phuong
	{
		return true;
	}
	return false;
}
void tong_so_chinh_phuong(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (kt_so_chinh_phuong(i) == true)//gọi hàm kt số chính phương ra
		{
			printf("%d ", i);
			s += i;
		}
	}
	printf("\ntong cac so chinh phuong trong khoang tu 1 den %d la: %d\n",n, s);
}
void tong_so_le(int n)
{
	int s = 0;
	for (int j = 1; j <= n; j++)
	{
		if (j % 2 != 0)
		{
			printf("%d ", j);
			s += j;
		}
	}
	printf("\ntong cac so le trong khoang tu 1 den %d la: %d\n",n, s);
}
