/*7.TO CONCATENATE TWO STRINGS OF DIFFERENT LENGTHS*/
#include<stdio.h>
#include<conio.h>
main()
{
	char a[20],b[20],c[50];
	int i,j;
	printf("Enter String a=");
	scanf("%s",a);
	printf("Enter String b=");
	scanf("%s",b);
	for(i=0;a[i]!=NULL;i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!=NULL;j++,i++)
	{
		c[i]=b[j];
	}
	c[i]=NULL;
	printf("%s",c);
	getch();
	return 0;
}
