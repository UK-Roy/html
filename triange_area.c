#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 2; i<n; i++){
        if((n%i) == 0){
            break;
        }
    }

    if(i == n){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
}
