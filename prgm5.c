#include<stdio.h>
void main(){
int i,n,j;
printf("Enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
}
