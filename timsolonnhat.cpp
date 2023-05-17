#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void nhap (float a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}
	while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%8.3f", a[i]);
	}
}
float timMax(float a[], int n)
{
	if(n == 1)return a[0];
	float max = timMax(a, n - 1);
	if(a[n - 1] > max)max = a[n - 1];
	return max;
}
int main()
{
	int n;float a[MAX];
	nhap(a, n);
	xuat(a, n);
	float max = timMax(a, n);
	printf("\nSo lon nhat = %.2f", max);
	getch();
	return 0;
}
