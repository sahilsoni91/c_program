/*12.WRITE A PROGRAM TO SORT OUT THE NAMES IN ASCENDING ORDER*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[20][20],k[20];
	int i,j,n;
	printf("How Many Names Do You Want To Enter=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Names=");
		scanf("%s",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(k,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],k);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%s",a[i]);
	}
	getch();
	return 0;
}
