

#include <iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void quickSort(int* arr, int l, int  r) {
	int i = l;
	int j = r;
	int pivot = arr[ (r + l) /2];
	while (i <= j) {
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}

	if (i < r)
		quickSort(arr, i, r);
	if (j > l)
		quickSort(arr, l, j);

}
int main()
{
	int t,n,*arr,k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		arr = new int[n * k];
		for (int i = 0; i < n * k; i++)
			cin >> arr[i];
		quickSort(arr,0,(n*k)-1);
		for (int i = 0; i < n * k; i++)
			cout << arr[i] << " ";
		cout << endl;
		delete[]arr;
	}
}

