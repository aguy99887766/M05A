#include <iostream>

void printStars(int n) {
	if (n == 0) {

		return;
	}

	for (int i = 0; i < n; i++) {
		std::cout << "*";
	}

	std::cout << std::endl;

	printStars(n-1);

	for (int i = 0; i< n; i++) {
		std::cout << "*";
	}

	std::cout << std::endl;
}


int main() {


	int lines;
	std::cout << "Enter the number of lines: ";
	std::cin >> lines;
	printStars(lines);

	return 0;
}

