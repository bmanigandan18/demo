#include<stdio.h>
#include<string.h>
int main()
{
    char *str="hello,world";
    char str1[15]="hello wo 9";
    strcpy(str,str1);
    printf("%s",str1);
    return 0;
}