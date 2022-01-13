#include "sort_class.h"

void SortClass::QuickSort(int low, int high) {
	int pivotpoint;
	if (high > low ) {
		partition(low, high,pivotpoint);
		QuickSort(low, pivotpoint - 1);
		QuickSort(pivotpoint + 1, high);
	}
}