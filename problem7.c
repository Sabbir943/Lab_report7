/*Write a C program to check whether a substring is present
 in a string.
Test Data :
Input the string : This is a test string.
Input the substring to be search : search
Expected Output :
The substring is not exists in the string.*/
#include<stdio.h>
int main()
{
    int c1=0,c2=0,i,j,flg;
    char str[100];
    char search[50];
    printf("Input the string:");
    fgets(str,sizeof(str),stdin);
    printf("Input the substring to be search:");
    fgets(search,sizeof(search),stdin);
    while(str[c1]!='\0')
    {
        c1++;
    }
    c1--;
    while(str[c2]!='\0')
    {
        c2++;
    }
    c2--;
    for(i=0;i<=c1-c2;i++)
    {
        for(j=i;j<i+c2;j++)
        {
            flg=1;
            if(str[j]!=search[j-i])
            {
                flg=0;
                break;
            }
        }
        if(flg==1)
        {
            break;
        }
    }
    if(flg==1){
        printf("The Substring exists in the string!");
        }
        else {
            printf("The substring is not exists:");
        }
}