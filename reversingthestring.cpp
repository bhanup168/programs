#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int l,j;
	char str[50];
	printf("\n enter string: ");
	gets(str);
	printf("\n the reverse string is: ");
	l=strlen(str);
	for(j=l-1;j>=0;j--)
	{
         printf("%c",str[j]);
	}
	getch();
}
