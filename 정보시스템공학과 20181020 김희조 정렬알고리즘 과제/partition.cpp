#include "sort_class.h"

void SortClass::partition(int low, int high, int& pivotpoint) {
	int i, j;
	int pivotitem;
	pivotitem = data[low];
	j = low;
	for (i = low + 1; i <= high; i++) {
		if (data[i] < pivotitem) {
			j++;
			exchangeData(&data[i], &data[j]);
		}
	}
	pivotpoint = j;
	exchangeData(&data[low], &data[pivotpoint]);
}