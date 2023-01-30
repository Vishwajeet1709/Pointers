//Function to swap values of two variables of calling function TSRS
#include<stdio.h>
void SwapFunction(int* a, int* b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a,b;
    printf("Enter two numbers to swap : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping values A = %d, and B = %d.\n",a,b);
    SwapFunction(&a,&b);
    printf("\nAfter swapping values A = %d, and B = %d.\n\n",a,b);
    return 0;
}
