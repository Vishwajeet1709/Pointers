//Program to calculate the sum of all elements present in array using pointers
#include<stdio.h>
int main()
{
    int i,sum=0,*ptr,arr[10];
    ptr = arr;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }
    printf("\nThe sum of numbers = %d.\n\n",sum);
    return 0;
}
