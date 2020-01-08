#include <stdio.h>
main()
{
int i,j,flag,Prime;
for (i=100;i<=10000;i++)
{
Prime = i;
flag=0;
while (Prime/10!=0)
{
flag=0;
for (j=2;j<Prime/2;j++)
{
if (Prime%j==0)
{
flag=1;
break;
}
}
if (!flag)
Prime/=10;
else
break;
}
if (!flag)
printf("%d ",i);
}
return 0;
} 
