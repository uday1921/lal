#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,p,q,c,d,k,sum=0;
int a[10][10],b[10][10],mul[10][10];
clrscr();
printf("Enter rows and columns for first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter rows and columns for second matrix\n");
scanf("%d%d",&p,&q);
if(n!=p)
printf("first matrix column and second matrix row value should be same");
else
{
printf("Enter the elements for the first matrix\n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&a[c][d]);
printf("Enter elements for the second matrix\n");
for(c=0;c<p;c++)
for(d=0;d<q;d++)
scanf("%d",&b[c][d]);
printf("The elements in the first matrix are\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
printf("%d\t",a[c][d]);
printf("\n");
}
printf("The elements in the second matrix are\n");
for(c=0;c<p;c++)
{
for(d=0;d<q;d++)
printf("%d\t",b[c][d]);
printf("\n");
}
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
for(k=0;k<p;k++)
{
sum=sum+a[c][k]*b[k][d];
}
mul[c][d]=sum;
sum=0;
}
}
printf("Product of matrix\n");
for(c=0;c<m;c++)
{
for(d=0;d<q;d++)
printf("%d\t",mul[c][d]);
printf("\n");
}
}
getch();
return 0;
}

