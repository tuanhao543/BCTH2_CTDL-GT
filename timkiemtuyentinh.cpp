 #include <stdio.h>
int search(int arr[], int n, int x)
{
	int i=0;
	while (i<n && arr[i] !=x)
		i++;
	if( i==n)
	return -1; 
	else
	return i; 

}
int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = search(arr, n, x);
  if (result != -1) {
    printf("gia tri %d xuat hien tai chi so %d", x, result);
  } else {
    printf("%d khong co trong mang", x);
  }
  return 0;
}
