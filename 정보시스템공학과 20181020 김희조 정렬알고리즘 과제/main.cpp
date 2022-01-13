#include "sort_class.h"

#define NUM_INTERATION 10

void main() {
	int n;

	int num_in[10] = { 1000,5000,10000,50000,100000,500000,1000000 };
	int i, j;
	time_t tc1, tc2;
	double total_time[6], exe_time;

	heap H;
	SortClass A;

	A.output_file.open("result_comp.txt");
	if (A.output_file.fail()) {
		cout << "Error to open file." << endl;
		exit(1);
	}

	A.output_file << "RAND_MAX = " << RAND_MAX << endl;

	for (j = 0; j < 7; j++) {
		n = num_in[j];
		A.output_file << endl << "The number of input data: n = " << n << endl;
		cout << endl << "n = " << n << endl;
		for (i = 0; i < 6; i++)
			total_time[i] = 0.0;

		for (i = 0; i < NUM_INTERATION; i++) {
			A.GenerateData(n);

			//Exchange sort
			A.CopyData(n);
			tc1 = clock();
			A.ExchangeSort(n);
			A.PringtSomeElements(0, 19);
			if (A.TestResult(n))
				cout << i << "Good in Exchange Sort. " << endl;
			else
				cout << i << "Error in Exchange Sort. " << endl;
			tc2 = clock();
			exe_time = (tc2 - tc1) / (double)CLOCKS_PER_SEC;
			A.output_file << i << "ES execution time = " << exe_time << " sec" << endl;
			total_time[0] += exe_time;

			//selection Sort
			A.CopyData(n);
			tc1 = clock();
			A.SelectionSort(n);
			if (A.TestResult(n))
				cout << i << "Good in Select Sort. " << endl;
			else
				cout << i << "Error in Select Sort. " << endl;
			tc2 = clock();
			exe_time = (tc2 - tc1) / (double)CLOCKS_PER_SEC;
			A.output_file << i << "SS execution time = " << exe_time << " sec" << endl;
			total_time[1] += exe_time;

			//Insertion Sort
			A.CopyData(n);
			tc1 = clock();
			A.InsertionSort(n);
			A.PringtSomeElements(0, 19);
			if (A.TestResult(n))
				cout << i << "Good in Insert Sort. " << endl;
			else
				cout << i << "Error in Insert Sort. " << endl;
			tc2 = clock();
			exe_time = (tc2 - tc1) / (double)CLOCKS_PER_SEC;
			A.output_file << i << "IS execution time = " << exe_time << " sec" << endl;
			total_time[2] += exe_time;		

			//Merge Sort
			A.CopyData(n);
			tc1 = clock();
			A.MergeSort2(0, n - 1);
			A.PringtSomeElements(0, 19);
			if (A.TestResult(n))
				cout << i << "Good in Merge Sort. " << endl;
			else
				cout << i << "Error in Merge Sort. " << endl;
			tc2 = clock();
			exe_time = (tc2 - tc1) / (double)CLOCKS_PER_SEC;
			A.output_file << i << "MS execution time = " << exe_time << " sec" << endl;
			total_time[3] += exe_time;
			
			//Quick Sort
			A.CopyData(n);
			tc1 = clock();
			A.QuickSort(0,n-1);
			if (A.TestResult(n))
				cout << i << "Good in Quick Sort. " << endl;
			else
				cout << i << "Error in Quick Sort. " << endl;
			tc2 = clock();
			exe_time = (tc2 - tc1) / (double)CLOCKS_PER_SEC;
			A.output_file << i << "QS execution time = " << exe_time << " sec" << endl;
			total_time[4] += exe_time;
			
			//Heap Sort
			A.HeapCopyData(n);
			tc1 = clock();
			A.HeapSort(n,H);
			if (A.HeapTestResult(n))
				cout << i << "Good in Heap Sort. " << endl;
			else
				cout << i << "Error in Heap Sort. " << endl;
			tc2 = clock();
			exe_time = (tc2 - tc1) / (double)CLOCKS_PER_SEC;
			A.output_file << i << "HS execution time = " << exe_time << " sec" << endl;
			total_time[5] += exe_time;
			
			
			
		}

		A.output_file << "ES Average time = " << total_time[0] / NUM_INTERATION << " sec" << endl;
		A.output_file << "IS Average time = " << total_time[1] / NUM_INTERATION << " sec" << endl;
		A.output_file << "SS Average time = " << total_time[2] / NUM_INTERATION << " sec" << endl;
		A.output_file << "MS Average time = " << total_time[3] / NUM_INTERATION << " sec" << endl;
		A.output_file << "QS Average time = " << total_time[4] / NUM_INTERATION << " sec" << endl;
		A.output_file << "HS Average time = " << total_time[5] / NUM_INTERATION << " sec" << endl;
	}

	A.output_file.close();
}