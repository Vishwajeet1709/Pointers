#include<stdio.h>
#include<string.h>
#include<ctype.h>
void SwapStr(char* str1,char* str2)
{
    char temp[10];
    strcpy(&temp,str1);
    strcpy(str1,str2);
    strcpy(str2,&temp);
}
int main()
{
    char str1[20],str2[20];
    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
    printf("\n\nString 1 before swap : ");
    puts(str1);
    printf("String 2 before swap : ");
    puts(str2);
    SwapStr(str1,str2);
    printf("\n\nString 1 after swap : ");
    puts(str1);
    printf("String 2 after swap : ");
    puts(str2);
    return 0;
}
