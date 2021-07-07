/*
code explain:

Fibonachi Serial Number :  1   2   3   4   5   6   7   8   9   10   11

Fibonachi Series :         1   1   2   3   5   8  12  21  34   55   89

We calculate Fib(6)
so lets step:

step: 

number = 3
          n3 = n1 + n2;
             = 1  + 1
             = 2
          printf(n3 = 2);
          n1 = n2;
             = 1
          n2 = n3;
             = 2
Fibonachi Series : 0   1   1   2

number = 4
          n3 = n1 + n2;
             = 1  + 2
             = 3
          printf(n3 = 3);
          n1 = n2;
             = 2
          n2 = n3;
             = 3
Fibonachi Series : 0   1   1   2  3
             
number = 5
          n3 = n1 + n2;
             = 2  + 3
             = 5
          printf(n3 = 5);

          n1 = n2;
             = 3
          n2 = n3;
             = 5
Fibonachi Series : 0   1   1   2   3   5

number = 6
          n3 = n1 + n2;
             = 3  + 5
             = 3
          printf(n3 = 8);
          n1 = n2;
             = 5
          n2 = n3;
             = 5
Fibonachi Series : 0   1   1   2   3   5   8

*/


#include<stdio.h>

int main(){
    int n1 = 0, n2 = 1,n3,i,number;

    printf("Enter the number of element: ");
    scanf("%d",&number);
   
    printf("\n The Febonacchi Series: %d %d ",n1,n2); //printing 0 and 1  
    
    for ( i = 2; i < number; ++i)
    {
        /* code */
        n3 = n1 + n2;
        printf("%d ",n3);
        n1 = n2;
        n2 = n3;
    }

    printf("\n");
    
    return 0;
}
