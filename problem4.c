/*4. Write a program in C to print individual characters of a
string in reverse order.
Test Data :
Input the string : programming
Expected Output :
The characters of the string in reverse are :
g n i m m a r g o r p*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i=0,l;
char str1[50];
printf("Input the string:");
fgets(str1,sizeof(str1),stdin);
l=strlen(str1);
printf("The characters of the string in reverse are :");
for(i=l-1;i>=0;i--)
{
printf("%c ",str1[i]);
}
return 0;

}
