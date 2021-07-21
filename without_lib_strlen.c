#include<stdio.h>
int main()
{
	char str[100];
    int i,len;
    printf("Enter the string :");
    gets(str);
    len = 0;
    for(i=0;str[i]!='\0';i++)
    len++;
    printf("\n length of the string :%d",len);
       
       return 0;
}