#include<stdio.h>
#define MaxSize 10
typedef struct{
    int data[MaxSize];
    int length;
}SqList;

//初始化一个顺序表
void InitList(SqList &L){
  for(int i=0;i<MaxSize;i++){
      L.data[i]=0;//设置初始值
   }
   L.length=0;
}

