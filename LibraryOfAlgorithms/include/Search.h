#pragma once

namespace search
{
	// O(log n)
	template<typename Iterator, typename T>
	Iterator binarySearch(Iterator begin, Iterator end, const T& value)
	{
		while (begin != end)
		{
			Iterator mid = begin;
			std::advance(mid, std::distance(begin, end) / 2);

			if (*mid == value)
			{
				return mid;
			}
			else if (*mid < value)
			{
				begin = std::next(mid);
			}
			else
			{
				end = mid;
			}
		}
		return end;
	}
	// O(n)
	template<typename Iterator, typename T>
	Iterator simpleSearch(Iterator begin, Iterator end, const T& value)
	{
		while (begin != end)
		{
			Iterator result = begin;
			if (*result == value)
			{
				return result;
			}
			else
			{
				begin = std::next(result);
			}
		}
		return end;
	}
}
