/*5.TO FIND MULTIPLICATION OF TWO MATRICES*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,p,q,m,n,k;
	printf("Enter Rows Of First Matrix=");
	scanf("%d",&p);
	printf("Enter Colums Of First Matrix=");
	scanf("%d",&q);
	printf("Enter Rows Of Second Matrix=");
	scanf("%d",&m);
	printf("Enter Colums Of Second Matrix=");
	scanf("%d",&n);
	printf("Enter Elements Of First Matrix=");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements Of Second Matrix=");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		if(q==m)
		{
			for(i=0;i<p;i++)
			{
				for(j=0;j<n;j++)
				{
					c[i][j]=0;
					for(k=0;k<q;k++)
					{
						c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
					}
				}
			}
			printf("Product Of Matrices=");
			for(i=0;i<p;i++)
			{
				printf("\n");
				for(j=0;j<n;j++)
				{
					printf("%d\t",c[i][j]);
				}
			}
		}
		else
		{
			printf("Multiplication Of Matrices Not Exist");
		}
	getch();
	return 0;
}
