#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n;
int a[10][10];
clrscr();
printf("enter the no of rows :");
scanf("%d",&m);
printf("enter the no of columns :");
scanf("%d",&n);
printf("enter the elemnets into array\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
return 0;
}