#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,i,j,a[10][10],t[10][10];
clrscr();
printf("Enter rows and columns for the matrix:\n");
scanf("%d%d",&m,&n);
printf("Enter the elements in the matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("The elements in the matrix are:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
t[j][i]=a[i][j];
}
}
printf("Tranpose of matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d\t",t[i][j]);
printf("\n");
}
getch();
return 0;
}

