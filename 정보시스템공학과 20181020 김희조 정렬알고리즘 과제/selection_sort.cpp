#include "sort_class.h"

void SortClass::SelectionSort(int n) {
	int i, j;
	int smallest;
	for (i = 0; i < n - 1; i++) {
		smallest = i;
		for (j = i + 1; j < n; j++)
			if (data[j] < data[smallest])
				smallest = j;
		exchangeData(&data[smallest], &data[i]);
	}

}


