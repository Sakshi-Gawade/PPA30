#include<stdio.h>

int main()
{
int length,breadth,area,perimeter;
printf("\nEnter the values of length and breadth:");
scanf("%d%d",&length,&breadth);

area=length*breadth;
perimeter=2*(length+breadth);
printf("\nArea=%d and Perimeter=%d",area,perimeter);
return 0;
}