#include <stdio.h>
//int main()
//{
//	int array[100],position,c,n,value;
//	printf("Enter number of elements in array\n");
//	scanf("%d",&n);
//	printf("Enter %d elements",n);
//	for(c=0;c<n;c++)
//	{
//		scanf("%d",&array[c]);
//	}
//	printf("Enter the location where you wish to insert element \n");
//	scanf("%d",&position);
//	printf("Enter the value to insert\n ");
//	scanf("%d",&value);
//	for(c=n+1;c>position - 1;c--)
//	{
//		array[c+1]=array[c];
//		
//	}
//	array[position-1]=value;
//	printf("Resultant array is:\n");
//	for(c=0;c<=n;c++)
//	{
//		printf("%d",array[c]);
//	}
//	return 0;
//}



//wap to delete an element from a even position in 1d array
int main()
{
	int n,i,loc=-1,key;
	printf("Enter array size");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements");
	for(i=0;i<n+1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("Element found at index %d",key,i);
		}
		
			
	    
	}
	return 0;
	

}
