#include<stdio.h>
#include<string.h>
int main()
{
  int length=0;
  char str1[50];
  int i;
  printf("Input the string:");
  fgets(str1,sizeof(str1),stdin);
  printf("The characters of the string are :\n");
  while(str1[length]!='\0')
  {
   printf("%c ",str1[length]);
   length++;
  }
  return 0;
}