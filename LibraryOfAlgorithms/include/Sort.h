#pragma once
#include <algorithm>

namespace sort
{
	template<typename Iterator>
	void selectionSort(Iterator begin, Iterator end)
	{
		for (Iterator i = begin; i != end; ++i)
		{
			Iterator minIt = i;
			for (Iterator j = std::next(i); j != end; ++j)
			{
				if (*j < *minIt)
				{
					minIt = j;
				}
			}
			if (minIt != i)
			{
				std::iter_swap(i, minIt);
			}
		}
	}
	template<typename Iterator>
	void bubbleSort(Iterator begin, Iterator end)
	{
		if (begin == end) return;

		bool swapped = true;
		while (swapped)
		{
			swapped = false;
			Iterator current = begin;
			Iterator next = std::next(begin);

			while (next != end)
			{
				if (*next < *current)
				{
					std::iter_swap(current, next);
					swapped = true;
				}
				++current;
				++next;
			}
		}
	}
}
