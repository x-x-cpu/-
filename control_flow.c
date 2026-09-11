#include <stdio.h>
int main()
{
	int score=75;
	int choice;
	int sum=0;
	int i;
	if (score>=60)
	{
		printf("及格\n");
	}
	else
	{
		printf("不及格\n");
	}
	printf("请输入选项：\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("查看任务\n");
			break;
		case 2:
			printf("提交任务\n");
			break;
		case 3:
			printf("退出\n");
			break;
			
		default:
			printf("无效选项\n");
			break;	 
	}
	for (i=1;i<=5;i++)
	{
		printf("当前数字：%d\n",i);
		sum=sum+i;
	}
	printf("1+2+3+4+5=%d\n",sum);
	return 0;
} 
