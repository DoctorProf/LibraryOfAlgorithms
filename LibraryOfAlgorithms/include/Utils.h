#pragma once
#include <iostream>
#include <vector>
#include <string>

namespace utils
{
	template<typename T>
	std::string printVector(std::vector<T>& vector)
	{
		std::string vector_str = "";
		for (const auto& item : vector)
		{
			vector_str += std::to_string(item) + " ";
		}
		return vector_str;
	}
}
