 #include <iostream>  
using namespace std; 
int Heapify(int a[], int n, int i) 
{ 
    int largest = i;  
    int l = 2*i + 1; 
    int r = 2*i + 2; 
    if (l < n && a[l] > a[largest]) 
        largest = l; 

    if (r < n && a[r] > a[largest]) 
        largest = r;  
    if (largest != i) 
    { 
        swap(a[i], a[largest]); 
        Heapify(a, n, largest); 
    } 
} 
int Heap_Sort(int a[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        Heapify(a, n, i); 
    for (int i=n-1; i>0; i--) 
    { 
        swap(a[0], a[i]); 
        Heapify(a, i, 0); 
    } 
} 
int main()
{
	int a[6] = {41, 23, 4, 14, 56, 1};
	Heap_Sort(a, 6 );
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
