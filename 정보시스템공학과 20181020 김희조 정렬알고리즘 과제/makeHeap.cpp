#include "sort_class.h"

void SortClass::makeHeap(int n, heap& H) {
	int i;
	H.S = data;
	H.heapsize = n;
	for (i = n/ 2;i >= 1; i--) 
		siftDown(H,i); 
}