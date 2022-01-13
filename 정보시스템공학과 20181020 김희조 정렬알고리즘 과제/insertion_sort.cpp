#include "sort_class.h"

void  SortClass::InsertionSort(int n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = data[i];
		j = i - 1;

		while (j >= 0 && data[j] > key)
		{
			data[j + 1] = data[j];
			j = j - 1;
		}
		data[j + 1] = key;
	}
}
