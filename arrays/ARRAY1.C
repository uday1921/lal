#include<stdio.h>
#include<conio.h>
int main(){
int i,A[6],n;
clrscr();

printf("Enter the no.of elements in the  array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for(i=0;i<
n;i++)
printf("The elements in the array are%d\n",A[i]);
getch();
return 0;
}