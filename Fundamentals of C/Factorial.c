/*13.TO FIND FACTORIAL OF A GIVEN NUMBER*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	b=1;
	printf("Enter Any Number=");
	scanf("%d",&a);
		while(a>=1)
		{
			b=b*a;
			a--;
		}
			printf("Factorial = %d",b);
	getch();
	return 0;
}
