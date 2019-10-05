/*15.WRITE A PROGRAM TO WRITE DATA IN A FILE*/
#include<stdio.h>
#include<conio.h>
main()
{
	FILE *p;
	int i,a;
	p=fopen("Sahil.txt","w");
	for(i=1;i<=10;i++)
	{
		printf("Enter Number");
		scanf("%d",&a);
		fprintf(p,"\n%d",a);
	}
	fclose(p);
	getch();
	return 0;
}
