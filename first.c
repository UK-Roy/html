#include<stdio.h>

float area(int base, int h);

void main()
{
    float a;
    a = area(6, 5);
    printf("%f", a);

}

float area(int base, int h)
{
    return 0.5*base*h;
}
