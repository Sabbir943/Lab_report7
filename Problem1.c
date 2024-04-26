/*1. Write a program in C to input a string and print it.*/
#include<stdio.h>
#include<string.h>
int main()
{
char name[50];
printf("Enter your name:");
gets(name);
printf("Your Full Name:%s\n",name);
return 0;
}