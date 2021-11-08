#include <stdio.h>

void ham_nhap(float& so_km);
void tinh_tien(float so_km);

int main()
{
	float so_km;
	ham_nhap(so_km);
	tinh_tien(so_km);
}
void ham_nhap(float& so_km)
{
	do
	{
		printf("ban muon di bao nhieu km ?");
		scanf_s("%f", &so_km);
		if (so_km <= 0)
			printf("Vui long nhap lai !\n");
	} while (so_km <= 0);
}

void tinh_tien(float so_km)
{
	float BILL = 0;//khởi tạo biến BILL để tính tổng số tiền phải trả
	if (so_km < 1)
	{
		BILL = so_km * 15000;
	}
	else if (so_km >= 1 && so_km < 6)
	{
		BILL = 15000 + (so_km - 1.0) * 13500;
	}
	else if (so_km >= 6)
	{
		BILL = 15000 + 4.0 * 13500 + (so_km - 5.0) * 11000;
	}

	if (so_km >= 120.0)
	{
		BILL = BILL * 0.9;
	}
	printf("so tien ban can tra la: %f\n", BILL);
}
