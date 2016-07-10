# decreasing-order
# include<stdio.h>
# include<conio.h>
void main()
{
int arr[10];
int i,j,t;
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
for(i=0;i<9;i++)
{
  for(j=i+1;j<10;j++)
  {
   if(arr[i]<arr[j])
   {
   t=arr[i];
   arr[i]=arr[j];
   arr[j]=t;
   }
}
}
printf("the decreasing order is");
for(i=0;i<10;i++)
printf("%d ",arr[i]);
getch();
}
