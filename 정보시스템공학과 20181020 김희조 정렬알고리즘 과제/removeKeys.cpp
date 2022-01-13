#include "sort_class.h"

void SortClass::removeKeys(int n, heap& H) {
	int i;
	for (i = n; i >= 1; i--)
		H.S[i] = root(H);
}