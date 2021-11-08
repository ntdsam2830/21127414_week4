#include <stdio.h>
#include <math.h>

void ham_nhap(int& n);
bool kt_so_chinh_phuong(int n);//hàm kt số chính phương

int main()
{
	int n;
	ham_nhap(n);
	if (kt_so_chinh_phuong(n))
	{
		printf("day la so chinh phuong\n");
	}
	else
	{
		printf("day khong phai la so chinh phuong\n");
	}
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
	int SQRT = sqrt(n);//khoi tao bien SQRT de luu gia tri can bac 2 cua n
	if (SQRT * SQRT == n)//neu nhu can bac 2 nhan can bac 2 cua so n là so nguyên thì n là so chính phuong
	{
		return true;
	}
	return false;
}
