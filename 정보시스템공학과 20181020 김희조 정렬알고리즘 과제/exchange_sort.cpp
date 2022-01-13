#include "sort_class.h"

void  SortClass::ExchangeSort(int n)
{
	int i, j;
	int temp;
	int nm2 = n - 2;

	for(i = 0;i<=nm2; i++)
		for(j = i+1; j<n;j++)
			if (data[j] < data[i]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
}