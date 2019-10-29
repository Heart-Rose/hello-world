#include <stdio.h> 
int main(void)
{
	int a,b,c,d,e;
	printf("旅行社人数：");
	scanf("%d",&a);
	printf("会英语人数：");
	scanf("%d",&b);
	printf("会俄语人数：");
	scanf("%d",&c);
	printf("两样都不会人数:");
	scanf("%d",&d);
	e=b+c+d-a;
	
  if(e==20) 
    printf("输入数据错误，无法计算\n");
     return 0;
}
