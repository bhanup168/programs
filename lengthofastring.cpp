#include<stdio.h>
#include<conio.h>
int main()
{
	int i,ch=0;
	//char mychar='a';
	char str[50];
	printf("\n enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		continue;
		ch++;
	}
	printf("the length of string is %d", ch);
	getch();
}
