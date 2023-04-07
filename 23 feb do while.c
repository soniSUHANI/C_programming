#include <stdio.h>
//int main(){
//	int i =1;
//	do
//	{
//		printf("Hello\n");
//		i++;
//	}
//	while(i<5);
//	return 0;
//}

//statemant for break

//int main(){
//	int i;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//		{
//			break;
//		}
//		printf("%d\n",i);
//	}
//	return 0;
//}


//statement of continue

//int main(){
//	int i;
//	for(i=1;i<=10;i++){
//		if(i==5){
//			continue;
//		}
//		printf("%d\n",i);
//	}
//	return 0;
//}


//wap to print list of an even noumbers from n numbers.

//int main(){
//	int i,n,count=0;
//	printf("Enter a number here: ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if (i%2==0){
//		continue;
//		}
//		count=count+1;
//		printf("%d\n",i);
//	}
//	printf("%d\n",count);
//	return 0;
//}

//wap to demonstrate the concept of go to statement

//int main(){
//	int n=10;
//	Aman:
//		printf("%d\n",n);
//		n= n-1;
//		if(n>0){
//			goto Aman;
//		}
//		return 0;
//}


//wap what is the output of size of void

int main(){
	printf("%d",sizeof(void));
	return 0;
}
