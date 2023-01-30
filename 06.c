//Program to calculate the length of a string using string using pointers
#include<stdio.h>
int StrCount(char *str)
{
    int i;
    for(i=0;*(str+i)!='\0';i++)
    {}
    return (i);
}
int main()
{
    char str[50];
    int count;
    printf("Enter a string : ");
    gets(str);
    count = StrCount(str);
    printf("\nLenght of this string is %d.\n\n",count);
    return 0;
}
