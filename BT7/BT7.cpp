#include<stdio.h>
#include<math.h>

void bieuthuc1(int n);
void bieuthuc2(int n);
void bieuthuc3(int n);
void ham_nhap(int& n);

int main()
{
	int n;
	ham_nhap(n);
	bieuthuc1(n);
	bieuthuc2(n);
	bieuthuc3(n);
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
void bieuthuc1(int n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += (float)(i - 1) / i;
	}
	printf("Ket qua bieu thuc 1 la %f\n", s);
}
void bieuthuc2(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i * (i + 1);
	}
	printf("Ket qua bieu thuc 2 la %d\n", s);
}
void bieuthuc3(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += pow(i, i);
	}
	printf("Ket qua bieu thuc 3 la %.lf\n", s);
}
