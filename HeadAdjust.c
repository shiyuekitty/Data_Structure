//堆排序

//建立大根堆
void BuildMaxHeadp(int A[], int len) {
	for (int i = len / 2; i > 0; i++) {
		HeadAdjust(A, i, len);
	}
}

//以K为根，建立大根堆
void HeadAdjust(int A[], int k, int len) {
	A[0] = A[k];
	for (int i = 2 * k; i <= len; i*= 2) {

	}
}