/*
Code Explain:
n = 124

while(124>o)
{
    m = 124 % 10
      = 4

    sum = sum + m
        =  0  + 4
    
    n = n/10
      =124 / 10
      =12

    m = 12 % 10
      = 2
}
n = 124
while(12>o)
{
    sum = sum + m
        =  4  + 2
    
    n = 12/10
      =12 / 10
      =1
}
n = 1
while(1>o)
{
    m = 1 % 10
      = 1

    sum = sum + m
        =  6  + 1
    
    n = 1/10
      =1 / 10
      =0
}
n = 0
while(0>0) conditon false so can not go while loop

*/

#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);
printf("\n");   
return 0;  
}