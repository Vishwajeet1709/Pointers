#include<stdio.h>
int main()
{
    int *ptr, num=6;
    ptr = &num;
    printf("\nProgram to demonstrate how to handle pointers\n");
    printf("\nFirst initialize *ptr as pointer and a another variable num=6\n");
    printf("\nAddress of variable \"num\" %p, is assigned to pointer \"ptr\"\n",ptr);
    printf("\nNow when I print the value of pointer \"ptr\" it prints the value of variable \"num\"\n\n");
    return 0;
}
