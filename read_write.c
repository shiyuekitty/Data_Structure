#include<stdio.h>
#include<stdlib.h>
/*
	��fgetc�����Ӽ�����������ַ�����fputc����д������
*/

int main()
{
	FILE* fp;
	char ch, filename[10];
	printf("�����������ļ�����");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("�޷��򿪴��ļ�");
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
	putchar(10); //���һ�����з�
	return 0;
}