#include "sort_class.h"

void SortClass::HeapSort(int n,heap&H) {
	makeHeap(n,H);
	removeKeys(n,H);
}