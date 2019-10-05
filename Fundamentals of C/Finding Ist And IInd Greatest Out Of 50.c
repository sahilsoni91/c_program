/*4.FINDING FIRST AND SECOND LARGEST NUMBER OUT OF 50*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[50],i,j,k;
	printf("Enter 50 Numbers=");
	for(i=0;i<50;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<49;i++)
		{
			for(j=i+1;j<50;j++)
			{
				if(a[i]<a[j])
				{
					k=a[i];
					a[i]=a[j];
					a[j]=k;
				}
			}
		}
			for(i=0;i<=1;i++)
			{
				printf("\n%d",a[i]);
			}
	getch();
	return 0;
}
