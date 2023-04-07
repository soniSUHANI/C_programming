//wap to take 2D arrays as an input from the user and then display the elements
#include <stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++)  //for loop for rows
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		
		}
		printf("Traversing");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
		
	}
}
