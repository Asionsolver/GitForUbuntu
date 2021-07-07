/*
code expain:

Step:

n = 5;
m = n/2
  = 5/2
  = 2

  for (i = 2; 2<=2;2++){
      if(5%2= 1 == 0) condition false so can not go if condition
      {
        printf("Number is not prime");    
        flag=1;    
        break; 
      }
  }
  so flag = 0
  if(flag==0)    
  printf("Number is prime");


n = 7;
m = n/2
  = 7/2
  = 3

  for (i = 2; 2<=3;2++){
      if(7%2= 1 == 0) condition false so can not go if condition
      {
        printf("Number is not prime");    
        flag=1;    
        break; 
      }
  }
  so flag = 0
  if(flag==0)    
  printf("Number is prime");

  n = 8;
  m = n/2
    = 8/2
    = 4

  for (i = 2; 2<=4;2++){
      if(8%2= 0 == 0) condition true so can go if condition
      {
        printf("Number is not prime");    
        flag=1;    
        break; 
      }
  }
  so flag = 1 condition false so can not go if condition
  if(flag = 1 == 0){ 
  printf("Number is prime");
 }


*/


#include<stdio.h>  
int main(){ 

        int n,i,m=0,flag=0;  

        printf("Enter the number to check prime: ");    
        scanf("%d",&n); 

        m=n/2;  

        for(i=2;i<=m;i++){    
            if(n%i==0){    
            printf("%d is not prime number.",n);    
            flag=1;    
            break;    
        }    
    }    
    if(flag==0){    
    printf("%d is prime number.",n);
    }

    printf("\n");    
    return 0;  
 } 