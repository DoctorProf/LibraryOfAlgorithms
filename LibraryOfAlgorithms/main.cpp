#include <iostream>
#include <vector>
#include "include/Search.h"

int main(int argc, char* argv[])
{
	std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	auto it_binary = search::binarySearch(vec.begin(), vec.end(), 10);

	if (it_binary != vec.end())
	{
		int index = std::distance(vec.begin(), it_binary);
		std::cout << "Result index: " << index << std::endl;
	}
	else
	{
		std::cout << "Value not found" << std::endl;
	}
	auto it_simple = search::simpleSearch(vec.begin(), vec.end(), 10);

	if (it_simple != vec.end())
	{
		int index = std::distance(vec.begin(), it_simple);
		std::cout << "Result index: " << index << std::endl;
	}
	else
	{
		std::cout << "Value not found" << std::endl;
	}
}