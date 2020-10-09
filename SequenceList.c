#include<stdio.h>
#define InitSize 10

typedef struct {
	int *data;
	int MaxSize;
	int length;
}SeqList;

//初始化顺序表
void InitList(SeqList L) {
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.MaxSize = InitList;
}

//增加数组长度
void IncreaceSize(SeqList L, int len) {
	int* p = L.data;
	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];
	}
	L.MaxSize = L.MaxSize + len;
	free(p);
}
