#include<stdio.h>
#include<conio.h>
int main()
{
	int n,f=1,i;
	printf("\n enter a number: ");
	scanf("%d",&n);
	printf("\n the factorial of a given number is: ");
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("%d",f);
	getch();
}
