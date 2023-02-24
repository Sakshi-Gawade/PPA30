
#include<stdio.h>
#include<conio.h>
int main()
{
int num;
int sumdigits(int num);
printf("Enter a number:");
scanf("%d",&num);
printf("\nSum of Digits=%d",sumdigits(num));
getch();
return 0;
}
int sumdigits(int num)
{
int sum=0;
while(num)
 {
  sum=sum+num%10;
  num=num/10;
 }
return sum;

}






        
       

 



    