#include<stdio.h>
int main()
{
int no= 11;
int num=14;
char ch='A';
float f=14.23;
double d=3.14;

printf("%d\n",no);
printf("Address of no is:%u\n",&no);
printf("Address of num is:%u\n",&num);
printf("Address of ch is:%u\n",&ch);
printf("Address of f is:%u\n",&f);
printf("Address of d is:%d\n",&d);
printf("Size of no is:%d\n",sizeof(no));
printf("Size of num is:%d\n",sizeof(num));
printf("Size of ch is:%u\n",sizeof(ch));
printf("Size of f is:%u\n",sizeof(f));
printf("Size of d is:%u\n",sizeof(d));
printf("%c\n",ch);
printf("Value of ch:%c\n",ch);

return 0;
}