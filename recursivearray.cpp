#include <iostream>


void reverseArray(int arr[], int low, int high) {
	if (low >= high) {
		return;
	}

	int temp = arr[low];
	arr[low] = arr[high];
	arr[high] = temp;

	reverseArray(arr, low+1, high-1);

}


void output(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}


int main() {

	int arr[] = {1, 2, 3, 4, 5, 6};
	int len = 6;
	int low = 1;
	int high = 4;

	std::cout << "Array before: ";
	output(arr, len);

	reverseArray(arr, low, high);

	std::cout << "Array after: ";
	output(arr, len);

	return 0;

}
