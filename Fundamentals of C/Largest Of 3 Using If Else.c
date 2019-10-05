/*2.TO FIND GREATEST NUMBER OUT OF 3 USING IF-ELSE*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter First Number=");
	scanf("%d",&a);
	printf("Enter Second Number=");
	scanf("%d",&b);
	printf("Enter Third Number=");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a Is Greater Number");
		}
		else
		{
			printf("c Is Greater Number");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b Is Greater Number");
		}
		else
		{
			printf("c Is Greater Number");
		}
	}
	getch();
	return 0;
}
