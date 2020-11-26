#include<stdio.h>
#include <malloc.h>
typedef int DataType;


typedef struct snode 
{
	DataType data;
	struct snode* next;
}LSNode;

// 初始化
void StackInitiate(LSNode** head)
{
	*head = (LSNode*)malloc(sizeof(LSNode));
	(*head)->next = NULL;
}

// 判断是否非空
int StackNotEmpty(LSNode* head)
{
	if (head->next == NULL) return 0;
	else return 1;
}

// 入栈
void StackPush(LSNode* head, DataType x)
{
	LSNode* p;
	p = (LSNode*)malloc(sizeof(LSNode));
	p->data = x;
	p->next = head->next;
	head->next = p;
}

// 出栈
int StackPop(LSNode* head, DataType* d)
{
	LSNode* p = head->next;
	if (p == NULL)
	{
		printf("堆栈已空，出错！");
		return 0;
	}
	head->next = p->next;
	*d = p->data;
	free(p);
	return 1;
}

// 取栈顶数据元素
int StackTop(LSNode* head, DataType* d)
{
	LSNode* p = head->next;
	if (p == NULL)
	{
		printf("堆栈已空，出错");
		return 0;
	}
	*d = p->data;
	return 1;
}

// 撤销动态申请空间
void Destory(LSNode* head)
{
	LSNode* p, * p1;
	p = head;
	while (p!=NULL)
	{
		p1 = p;
		p = p->next;
		free(p1);
	}
}

int main()
{

}