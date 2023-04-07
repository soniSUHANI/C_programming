#include <stdio.h>
//int main(){
//	int a[2]={10,20,30,40,50};
//	printf("%d",a[3]);
//	return 0;
//}

//wap to take input form user and then traverse
//int main()
//{
//	int roll_no[10];
//	int i;
//	for(i=0;i<10;i++);
//	{
//		scanf("%d\n",&roll_no[i]);
//	}
//	printf("Travesing array element");
//	for(i=0;i<10;i++)
//	{
//		printf("Index is %d and value is %d",)
//	}
//	return 0;
//}

//wap to find list of even numbers	

int main(){
	int size;
	int count=0;
	printf("Enter size of an array\n");
	scanf("%d",&size);
	int a[size];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("List of even numbers\n");
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0);
		{
			printf("%d\n",a[i]);
		}
		
	}
	printf("count is %d",count);
	
	return 0;
}


