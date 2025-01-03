#include<stdio.h>
void main(){
int i,n;
printf("Enter a number\n");
scanf("%d",&n);
printf("Multiplication Table\n");
for(i=0;i<=10;i++)
{
printf("%d x %d =%d\n",i,n,i*n);
}
}
