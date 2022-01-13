#include "sort_class.h"

void SortClass::MergeSort2(int low, int high) {
	int mid = 0;
	if (low<high)
	{
		mid = (low + high) / 2;
		MergeSort2(low, mid);
		MergeSort2(mid + 1, high);
		Merge2(low, mid, high);
	}
}