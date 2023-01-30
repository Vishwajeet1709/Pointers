//Program to print a string in reverse order using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,end;
    char *ptr, str[50];
    printf("Enter a string : ");
    gets(str);
    ptr = str;
    end=strlen(ptr);
    for(i=end-1;i>=0;i--)
    {
        if(*(ptr+i) == ' ' || i == 0)
        {
            if(i==0)
                printf(" ");

            for(j=i;j<end;j++)
            {
                printf("%c",*(ptr+j));
            }
            end=i;
        }
    }
    return 0;
}
