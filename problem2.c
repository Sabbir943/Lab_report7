/*2. Write a program in C to find the length of a string 
without using library functions.
Test Data :
Input the string : cprogramming.com
Expected Output :
Length of the string is : 16*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    int i,length=0;
    printf("Input the string:");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of the string is :%d",length);
    return 0;
}
