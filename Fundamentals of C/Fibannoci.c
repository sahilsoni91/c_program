/*11.WRITE FIBONACCI SERIES UPTO 100*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	a=0;
	b=1;
	while(a<=100)
	{
		printf("\n%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
	return 0;
}
