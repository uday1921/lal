#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,c,d,a[10][10],b[10][10],sum[10][10];
clrscr();
printf("Enter the number of rows and columns\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of the first matrix\n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&a[c][d]);
printf("The elements of first matrix are\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
printf("%d\t",a[c][d]);
printf("\n");
}
printf("Enter the elements of the second matrix\n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&b[c][d]);
printf("The elements of second matrix are\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
printf("%d\t",b[c][d]);
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++)
sum[c][d]=a[c][d]+b[c][d];
printf("The sum of matrix is\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
printf("%d\t",sum[c][d]);
printf("\n");
}
getch();
return 0;
}


