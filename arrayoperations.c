#include<stdio.h>
#include<stdlib.h>
int arr[100],i;
int arr_count=0;
void create()
 {
 int i;
 //printf("\n.................\n");
 printf("enter the size of array:");
 scanf("%d",&arr_count);
 printf("enter the elements");
 for(i=0;i<arr_count;i++)
   {
   scanf("%d",&arr[i]);
   }
}
void insert()
{ 
 int ins_pos,i,new_val;
 printf("Enter the positon:");
 scanf("%d",&ins_pos);
 for(i=arr_count-1;i>=ins_pos-1;i--)
 {
   arr[i+1]=arr[i];
  }
 printf("which value you want to add:");
 scanf("%d",&new_val);
 arr[ins_pos-1]=new_val;
 printf("New array is:\n");
 arr_count=arr_count+1;
 for(i=0;i<arr_count;i++)
  {
  printf("%d",arr[i]);
  }
 }
void delete()
{
 int del_pos,i;
 printf("enter the position to delete");
 for(i=del_pos-1;i<arr_count-1;i++)
 {
 arr[i]=arr[i+1];
 }
 printf("new array:");
 arr_count=arr_count-1;
 for(i=0;i<arr_count;i++)
  {
  printf("%d",arr[i]);
  }
  }
 void view()
 {
 int i;
 printf("elements are;\n");
 for(i=0;i<arr_count;i++)
  {
  printf("%d",arr[i]);
  }
  }
  int main()
  {
  int opt=0;
  while(1)
  {
   printf("1)CREATE\n");
   printf("2)INSERT\n");
   printf("3)DELETE\n");
   printf("4)VIEW\n");
   printf("Enter your choice");
   scanf("%d",&opt);
   switch(opt)
   {
   case 1: create();
           break;
   case 2: insert();
           break;
   case 3: delete();
           break;
   case 4: view();
           break;
   default:printf("invalid option");
   }
   }
   return 0;
   }
 
 
  
  





