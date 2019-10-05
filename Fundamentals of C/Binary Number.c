/*10.TO CONVERT DECIMAL NUMBER INTO BINARY NUMBER*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter Any Number=");
	scanf("%d",&a);
	printf("\t\t");
		while(a>0)
		{
			b=a%2;
			printf("%d",b);
			printf("\b\b");
			a=a/2;
		}
	getch();
	return 0;
}
