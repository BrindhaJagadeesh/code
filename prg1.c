#include<stdio.h>
#include<conio.h>
int main()
{
int number,x,pair,i,j=1;
printf("Enter the number:");
scanf("%d",&number);
printf("Enter the pair:");
scanf("%d",&pair);
for(i=0;i<2*number;i++)
{
x=2*number-i;
if(pair!=x)
{
printf("The pair is%d for days %d is %d\n",pair,j++,pair);
}
}
getch();
}
