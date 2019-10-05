/*9.TO CHECK THE NUMBER IS PRIME OR NOT*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	b=2;
	printf("Enter Any Number=");
	scanf("%d",&a);
	while(a%b!=0)
	{
		b++;
	}
		if(a==b)
		{
			printf("Number Is Prime");
		}
		else
		{
			printf("Number Is Not Prime");
		}
	getch();
	return 0;
}
