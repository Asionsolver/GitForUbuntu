
/*
Fibonachi Serial Number :  1   2   3   4   5   6   7   8   9   10   11

Fibonachi Series :         1   1   2   3   5   8  12  21  34   55   89

We calculate Fib(6)
so lets step:

Fib(6)
=Fib(5) + fib(4)
=Fib(4) + Fib(3) + Fib(3) + Fib(2)
=Fib(3) + Fib(2) + Fib(2) + Fib(1) + Fib(2) + Fib(1) + Fib(2)
=Fib(2) + Fib(1) + Fib(2) + Fib(2) + Fib(1) + Fib(2) + Fib(1) + Fib(2)
=  1    +   1    +   1    +   1    +   1    +   1    +   1    +   1
= 8

*/

#include<stdio.h>

int fib( int n){
    if(n == 1 || n ==2){
        return 1;
    }
    else{
        return(fib(n-1) + fib(n-2));
    }
}

int main(){

    int n;
    printf("Enter Number Of N : ");
    scanf("%d", &n);

    printf("%dnt term Fibonacci Series number: %d\n",n,fib(n));

}