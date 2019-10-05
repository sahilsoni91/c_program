/*1.TO FIND GREATEST NUMBER OUT OF 3 USING FOR LOOP*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[3],i,j,k;
	printf("Enter 3 Numbers=");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<2;i++)
		{
			for(j=i+1;j<3;j++)
			{
				if(a[i]<a[j])
				{
					k=a[i];
					a[i]=a[j];
					a[j]=k;
				}
			}
		}
		printf("\nGreatest Number=%d",a[0]);
	getch();
	return 0;
}
