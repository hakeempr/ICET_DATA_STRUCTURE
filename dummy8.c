#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}
struct node*head;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main(){
int choice=0;
while(choice!=9)
{
printf("\n\n*******MainMenu********\n");
printf("\nChoose one option from the following list..\n");
printf("\n====================================================\n");
printf(("\n1.Inser in beginning\n2.Insert at last\n3.Insert at any random location \n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
printf("\nEnter your choice: ");
scanf("\n%d",&choice);
switch(choice){
case 1:
beginsert();
break;
case 2:
