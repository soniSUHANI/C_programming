#include <stdio.h>
//wap to take 10 inputs and print the sum of these numbers
//int main(){
//	int num,sum=0,i;
//	for(i=0;i<=9;i++)
//	{
//		printf("Enter a number = ");
//		scanf("%d",&num);
//		sum =sum +num;
//	}
//	printf("sum of the number is= %d",sum);
//}
  // 2nd method using arrays
//int main(){
//	int i,a[10],sum=0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//		
//	}
//	for(i=0;i<10;i++)
//	{
//		sum =sum + a[i];
//	}
//	printf("sum = %d",sum);
//}

//wap to take input for 2d array and display

int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++)  //for the rows
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&a[i][j]);
		    
		  }  
	}
	printf("Traversing 2D array \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d \t",a[i][j]);
		}
		printf("\n");
    }

    
	return 0;
} 
