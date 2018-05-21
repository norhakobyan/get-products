#include "stdafx.h"
#include <iostream>

int getProducts(int [], int);

int main() {
	int arr[] = {2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	getProducts(arr, size);
}
int getProducts(int arr[], int size) {
	int *arr1 = new int[size];
	int res;
	for(int i = 0; i < size; ++i) {
		arr1[i] = 1;
	}
	res = 1;
	for(int i = 0; i < size; ++i) {
		arr1[i] = arr1[i] * res;
		res = res * arr[i];
	} 
	res = 1;
	for(int i = size - 1; i >=0; --i) {
		arr1[i] = arr1[i] * res;
		res = res * arr[i];
		std::cout << arr1[i] << std::endl;
	}
	return true;
}
