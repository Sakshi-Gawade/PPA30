#include<stdio.h>
int main()
{
int no=11;

char ch='A';

printf("%d",no);
printf("Value of ch:%c \n",ch);

printf("Address of no is : %u\n",&no);

printf("Adress of ch is :%u\n",&ch);

printf("Size of no is : %d\n",sizeof(no));

printf("Size of ch is:%d\n",sizeof(ch));
return 0;
}