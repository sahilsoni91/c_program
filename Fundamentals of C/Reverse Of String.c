/*6.WRITE A PROGRAM TO REVERSE THE STRING*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[20];
	printf("Enter Any String=");
	scanf("%s",a);
	strrev(a);
	printf("%s",a);
	getch();
	return 0;
}
