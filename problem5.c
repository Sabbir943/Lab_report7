/*Write a program in C to count the total number of
words in a string.
Test Data :
Input the string : This is Wayech Kurni.
Expected Output :
Total number of words in the string is : 4*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,word=1;
    char str[100];
    printf("Input the string :");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
           word++;  
        }
        i++;
    }
    
    printf("Total number of words in the string is :%d\n",word-1);
}