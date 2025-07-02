#include <iostream>
#include <vector>
#include "include/Search.h"
#include "include/Sort.h"
#include "include/Utils.h"

int main(int argc, char* argv[])
{
	std::vector<int> vec_sorted = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::vector<int> vec_unsorted = { 4, 1, 2, 3, 5, 9, 8, 7, 6, 10 };

	std::cout << utils::printVector(vec_unsorted) << std::endl;
	sort::selectionSort(vec_unsorted.begin(), vec_unsorted.end());
	std::cout << utils::printVector(vec_unsorted);
}