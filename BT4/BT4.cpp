#include <stdio.h>
void ham_nhap(int& n);
int kiem_tra_chu_so(int N);

int main()
{
	int N;
	ham_nhap(N);
	kiem_tra_chu_so(N);
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
int kiem_tra_chu_so(int N)
{
	int temp = 0;//khởi tạo biến temp để lưu trữ từng chữ số
	while (N != 0)
	{
		temp = N % 10;//chia lấy dư để lấy từng chữ số, theo thứ tự từ phải sang trái 
		if (temp % 2 == 0)//nếu là số chẵn sẽ ngưng vòng lặp ngay, in màn hình thông báo và trả về 0
		{
			printf("NO\n");
			return 0;
		}
		N /= 10;//nếu là số lẻ thì tiếp tục chia lấy nguyên 10 để lặp lại qui trình
	}
	printf("YES\n");
}