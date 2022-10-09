#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void makeArray(int[], int);
void printArray(int[], int);
int findMin(int[], int);
void compareTwo(int[], int, int);

int findMin(int number[], int N)
{
}
void compareTwo(int number[], int N, int step)
{
}
void makeArray(int number[], int N)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
		number[i] = rand() % 20;
}
void printArray(int number[], int N)
{
	for (int i = 0; i < N; i++)
		cout << number[i] << "\t";
	cout << endl;
}