#include<stdio.h>
int main()
{
 auto int a,b;
printf("\nEnter the values od a and b:");
scanf("%d%d",&a,&b);

if(a>b)
printf("\nMaximum=%d\n",a);
else
printf("\nMaximum=%d\n",b);
return 0;
}