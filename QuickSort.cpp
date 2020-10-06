//��������
int Partition(int A[], int low, int high) {
	int pivot = A[low];
	while (low < high) {
		while (low < high && A[high] >= pivot) --high;
		A[low] = A[high];
		while (low < high && A[low] <= pivot) ++low;
		A[high] = A[low];
	}
	A[low] = pivot;
	return low;
}

void QuickSort(int A[], int low, int high) {
	if (low < high) {
		int pivotpos = Partition(A, low, high); //����
		QuickSort(A, low, pivotpos - 1);  // �������ӱ�
		QuickSort(A, pivotpos + 1, high);  // �������ӱ�
	}
}