#ifndef SORTCLASS_H
#define SORTCLASS_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

#define N_DATA 1000000

struct heap {
	int* S;
	int heapsize;
};

class SortClass {
private:
	int num_data;
	int* org_data;
	int* data;
public:
	SortClass();
	~SortClass();


	void GenerateData(int n);
	void CopyData(int n);
	void exchangeData(int* i, int* j);
	void HeapCopyData(int n);
	bool TestResult(int n);
	bool HeapTestResult(int n);
	
	void partition(int low, int high, int& pivotpoint);
	void Merge2(int low, int mid, int high);
	int root(heap& H);
	void siftDown(heap& H,int i);
	void makeHeap(int n, heap& H);
	void removeKeys(int n, heap& H);
	void PringtSomeElements(int low, int high);

	void ExchangeSort(int n);
	void InsertionSort(int n);
	void SelectionSort(int n);
	void QuickSort(int low, int high);
	void MergeSort2(int low, int high);
	void HeapSort(int n, heap& H);

	ofstream output_file;
};

#endif // !SORTCLASS_H
