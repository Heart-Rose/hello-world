#include<stdio.h>
int main()
{
int x,i,j,t,f,k=0,a[5],c,b[10000];
for(c=0;c<5;c++){
	scanf("%d",&a[c]);
}
for(f=0;f<4;f++) 
for(i=0;i<4-f;i++) 
if(a[i]<a[i+1]) 
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
x=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
for(j=2;j*j<=x;j++){
if(x%j==0){
printf("error");
break;}
if(j*j>x)
printf("%d",x);
}
return 0;
}

