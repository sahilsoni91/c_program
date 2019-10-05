/*14-b.PROGRAM OF SWAPING VALUES USING CALL BY REFERENCE*/
#include<stdio.h>
#include<conio.h>
int swap(int *a,int *b)
{
	int *c;
	*c=*a;
	*a=*b;
	*b=*c;
}
main()
{
	int a,b;
	a=10;
	b=20;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swap(&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	getch();
	return 0;
}
