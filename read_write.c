#include<stdio.h>
#include<stdlib.h>
/*
	用fgetc函数从键盘逐个输入字符，用fputc函数写到磁盘
*/

int main()
{
	FILE* fp;
	char ch, filename[10];
	printf("请输入所用文件名：");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("无法打开此文件");
		exit(0);
	}
	ch=getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10); //输出一个换行符
	return 0;
}