#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
	int x;
	for (int i = 1; i < n; i++){
		x=arr[i];
		int j=i-1;
		while (j>=0 && arr[j]>x){
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=x;
	}
    for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main(){
	int arr[] = {11,23,99,81,56,27,4,6,34,7,8,33,65,78,26,58,35,9,45,11,17,61};
	int n = sizeof(arr) / sizeof(int);
	insertionSort(arr, n);
	return 0;
}