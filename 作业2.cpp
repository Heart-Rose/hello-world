#include<stdio.h>

int main()
{
int a,b,t,an,bn;
scanf("%d%d",&an,&bn);
a = an;
b = bn;
if(a < b)
{
t = a;
a = b;
b = t;
}
while(t=a%b)
{
a = b;
b = t;
}
if(b == 1)
{
printf("%d��%d����",an,bn);
}
else
{
printf("%d��%d�����Լ��Ϊ%d",an,bn,b);
}
} 
