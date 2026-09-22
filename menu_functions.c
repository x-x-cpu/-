#include <stdio.h>
int running =1;
void showmenu(void);
int readchoice(void);
void handlechoice(int choice);
int main(void)
{
	while(running)
	{
		showmenu();
		int choice = readchoice();
		handlechoice(choice);
	}
	return 0;
}
void showmenu(void)
{
    printf("1. 查看今日任务\n"
              "2. 提交打卡\n"
              "3. 查看统计\n"
              "0. 退出\n");
}

int readchoice(void)
{
	int choice;
    scanf("%d",&choice);
    return choice;
}

void handlechoice(int choice)
{
    switch (choice)
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
