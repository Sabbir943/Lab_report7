#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,vow=0,con=0;
    char str[100];
    printf("Input the string:");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
   for(i=0;i<len;i++)
   {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||
    str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||
    str[i]=='O'||str[i]=='U')
    {
        vow++;
    }
    else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
    {
        con++;
    }
    }
    printf("The total number of vowel in the string is :%d\n",vow);
    printf("The total number of consonant in the string is :%d\n",con);
    return 0;
    }