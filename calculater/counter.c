#include <stdio.h>
int main ()
{
    double a,b;
    char op;
    scanf("%lf %c %lf",&a,&op,&b);
    if (op=='+')
    {printf("%f\n",a+b);
	}
	  else if (op=='-')
    {printf("%f\n",a-b);
	}
	  else if (op=='*')
    {printf("%f\n",a*b);
	}
	  else if (op=='/')
	  {
	  if (b==0) 
    {printf("被除的数不能为0!\n");}
    else
	{
	printf("%f\n",a/b);
	}}
	else 
	{
		printf("不支持此运算符：%c\n",op);
	}
	return 0;
}
