#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int Quick_Sort(int a[], int l, int r){
	int p = a[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		Quick_Sort(a, i, r);
	}
	if (j < l){
		Quick_Sort(a, l, j);
	}
}
int main()
{
	int a[6] = {41, 23, 4, 14, 56, 1};
	Quick_Sort(a, 0,5 );
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
