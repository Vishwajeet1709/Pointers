//Program to find gratest number between two number using pointers
#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,num1,num2;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    ptr1 = &num1;
    ptr2 = &num2;
    *ptr1>*ptr2?printf("\n\n%d is the greatest number.\n\n",*ptr1):printf("\n\n%d is the greatest number.\n\n",*ptr2);
    return 0;
}
