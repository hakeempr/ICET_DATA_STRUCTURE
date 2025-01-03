#include<stdio.h>
void main(){
int num,rev=0;
printf("Enter a Number\n");
scanf("%d",&num);
while(num!=0){
rev=rev*10+num%10;
num=num/10;
}
printf("reversed number=%d\n",rev);
}
