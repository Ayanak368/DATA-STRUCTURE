#include<stdio.h>
void main()
{
 int n,m,flag=0,i;
 printf("enter the number to check:");
 scanf("%d",&n);
 m=n/2;
 for(i=2;i<=m;i++)
 {
 if(n%i==0)
 { 
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 printf("the number is prime");
  }
  else
    printf("the number is not prime");
    }
