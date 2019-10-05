/*8.TO CHECK THE STRING IS PALLINDROME OR NOT*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	printf("Enter Any String=");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("String Is Pallindrom");
	}
	else
	{
		printf("String Is Not Pallindrom");
	}
	getch();
	return 0;
}
