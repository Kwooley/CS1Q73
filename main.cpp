#include "main.hpp"

int main()
{
	const int N = 8;
	// int number[N];
	int number[N] = {17, 11, 3, 6, 1, 18, 5, 14};
	int min;

	// makeArray(number, N);
	printArray(number, N);
	min = findMin(number, N);
	printArray(number, N);
	cout << "Min value is : " << min << endl;
}