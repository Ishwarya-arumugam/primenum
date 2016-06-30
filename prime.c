#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,flag=0;
clrscr();
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
}
}
if(flag==0)
{
printf("Prime number");
}
else
{
printf("Not a primr number");
}
getch();
return 0;
}
