//wap to find the sum of diagonal elements

# include <stdio.h>
int main()
{
	int r,c,i,j,sum=0;
	printf("Enter rows\n");
	scanf("%d",&r);
	printf("Enter columns\n");
	scanf("%d",&c);
	int a[r][c];
	printf("Enter array elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Sum of diagonal elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum =sum +a[i][j];
			}
		}
		printf("%d",sum);
	}
	
	return 0;
}

