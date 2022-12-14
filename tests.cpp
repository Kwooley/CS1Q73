// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include <fstream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1 findMin() ", "[example]")
{
	const int N = 8;
	// int number[N];
	int number[N] = {17, 11, 3, 6, 1, 18, 5, 14};
	int min;

	// makeArray(number, N);
	printArray(number, N);
	min = findMin(number, N);
	printArray(number, N);
	REQUIRE(min == 1);
	cout << "--------------------------------------------------\n";

	// REQUIRE(number[idx] == usernum);
}
TEST_CASE("Ex2 compareTwo() ", "[example]")
{
	const int N = 8;
	// int number[N];
	int number[N] = {17, 11, 3, 6, 1, 18, 5, 14};
	int min, step;

	// makeArray(number, N);
	printArray(number, N);
	step = 1;
	compareTwo(number, N, step);
	printArray(number, N);

	REQUIRE(number[0] == 11);
	REQUIRE(number[2] == 3);
	REQUIRE(number[4] == 1);
	REQUIRE(number[6] == 5);
	// REQUIRE(number[idx] == usernum);

	step = 2;
	compareTwo(number, N, step);
	printArray(number, N);
	cout << "--------------------------------------------------\n";
	REQUIRE(number[0] == 3);
	REQUIRE(number[4] == 1);
}