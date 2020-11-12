#include<stdio.h>

void main(){

    int n;
    scanf("%d", &n);
    int i, sum;
    for(i =1, sum=0; i<=n ; i++){
        sum += i;
    }
    printf("%d", sum);
}
