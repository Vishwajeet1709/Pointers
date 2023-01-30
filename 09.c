//Program to print elements in reverse order using pointers
#include<stdio.h>
int main()
{
    int i,*ptr,arr[10];
    printf("Enter any 10 numbers : ");
    ptr = arr;
    for(i=0;i<10;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\nNumbers that you have entered :");
    for(i=0;i<10;i++)
    {
        printf(" %d",*(ptr+i));
    }
    printf("\n\nNumbers in reverse order :");
    for(i=0;i<10;i++)
    {
        printf(" %d",*(ptr+9-i));
    }
    printf("\n\n");
    return 0;
}
