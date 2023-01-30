/*Program to calculate the number(s) of vowels and consonants
 present is a sentence using pointers*/
 #include<stdio.h>
 int main()
 {
     char *ptr,str[50];
     int i,vowels=0,consonant=0;
     printf("Enter a string : ");
     gets(str);
     ptr = str;
     for(i=0;*(ptr+i)!='\0';i++)
     {
         if(*(ptr+i) == 'a' || *(ptr+i) == 'e' || *(ptr+i) == 'i' || *(ptr+i) == 'o' || *(ptr+i) == 'u')
            vowels++;
         else if(*(ptr+i) != ' ')
            consonant++;
     }
     printf("Numbers of vowels = %d\nNumbers of consonant = %d\n\n",vowels,consonant);
     return 0;
 }

