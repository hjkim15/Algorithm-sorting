#include "sort_class.h"

void SortClass::exchangeData(int* i, int* j) {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}