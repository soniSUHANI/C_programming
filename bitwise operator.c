#include <stdio.h>
//int main(){
//	int a=2,b=8;
//	printf("%d\n",~a);
//	printf("%d\n",~b);
//	return 0;
//}

//int main(){
//	int a=5;
//	printf("%d",(a>>1));
//  return 0;
//}


//static input
//int main(){
//	char a[100]="Aman Deep Kaur";
//	printf("%s",a);
//	return 0;
//}

int main(){
	char a[50];
	printf("Enter Name: ");
//	scanf("%s",&a);
    scanf("%[^\n]%*c",a);
	printf("%s",a);
	return 0;
}
