#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a,b,c;
	a=0;
	b=1;
	printf("\n enter a number: ");
	scanf("%d",&n);
	printf("\n FIBONACCI SERIES:  ");
	//scanf("%d %d",a,b)
	printf("%d %d ",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	getch();
}
