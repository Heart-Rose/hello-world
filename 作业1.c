#include<stdio.h>
int main()
{
int i,a,b,t;
scanf("%d%d",&a,&b);//输入数a,b
if(a>b)//比较a,b大小，如果a>b则交换，结果为a<b
{
t=a;
a=b;
b=t;
}
for (i = a; i >= 2; i--)//以较小的a为基数，每次i减小1循环求最大公约数
{
if (a % i == 0 && b % i == 0)//如果两数均能整除某数则该数为最大公约数
{
printf("最大公约数是：%d\n",i);
break;//已得到最大公约数后跳出循环
}
}
if(i==1)//若循环到最后仍无最大公约数则i=1
printf("两数只能同时被1整除！\n");
return 0;
} 
