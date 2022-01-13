#include "sort_class.h"

bool SortClass :: TestResult(int n)
{
	int i;
	for (i = 1; i < n; i++)
		if (data[i - 1] > data[i])
			return false;
	return true;
}