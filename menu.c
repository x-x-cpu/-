#include <stdio.h>
int main()
{
	int x;
	int running =1;
	while (running)
	{
	   printf("1. 查看今日任务\n"
              "2. 提交打卡\n"
              "3. 查看统计\n"
              "0. 退出\n");

	    scanf("%d",&x);
	
		switch (x)
		{
		case 0:
			printf("已退出\n"); 
			running =0;
			break; 
		case 1:
			printf("查看今日任务\n");
			break;
		case 2:
			printf("提交打卡\n");
			break;
		case 3:
			printf("查看统计\n");
			break;
		default:
			printf("无效选项，请重新输入\n");
			break;
		}
	}
		return 0;
			 
 } 
