#include<sdio.h>
int func(int x)
{
    int a = x*x;
    return a;
}

main(){

    int a = func(4);
    printf("%d", a);

}
