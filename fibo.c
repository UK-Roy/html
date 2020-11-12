#include<stdio.h>

 int fibonacci(int n);

 int main()
 {
     int n;
     scanf("%d", &n);
     printf("%d", fibonacci(n));
 }

 int fibonacci(int n)
 {
     int fib1 = 0, fib2 = 1, fib;

     for(int i = 3; i<=n; i++)
     {
         fib = fib1 + fib2;
         fib1 = fib2;
         fib2 = fib;
     }

     return fib;
 }
