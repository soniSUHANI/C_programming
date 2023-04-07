#include <stdio.h>
//int main(){
//	int month;
//	printf("Enter any no between 1 to 12= ");
//	scanf("%d",&month);
//	switch(month){
//		case 1:
//			printf("January");
//		break;
//		case 2:
//			printf("Feburary");
//		break;
//		case 3:
//			printf("March");
//		break;
//		case 4:
//			printf("April");
//		break;
//		case 5:
//			printf("May");
//		break;
//		case 6:
//			printf("June");
//		break;
//		case 7:
//			printf("July");
//		break;
//		case 8:
//			printf("August");
//		break;
//		case 9:
//			printf("September");
//		break;
//		case 10:
//			printf("October");
//		break;
//		case 11:
//			printf("November");
//		break;
//		case 12:
//			printf("December");
//		break;
//	}
//}
//write a program to make calculator by using switch statement

//int main(){
//	printf("Press + for Addition\n");
//	printf("Press - for Subtraction\n");
//	printf("Press / for Division\n");
//    printf("Press * for Multiplication\n");
//	
//	char choice;
//	printf("Enter your choice: ");
//	scanf("%c",&choice);
//	int a,b;
//	printf("Enter a: ");
//	scanf("%d",&a);
//	printf("Enter b: ");
//	scanf("%d",&b);
//	switch(choice){
//		case '+':
//			printf("%d+%d=%d",a,b,(a+b));
//		break;
//		case '-':
//			printf("%d-%d=%d",a,b,(a-b));
//		break;
//		case '/':
//			printf("%d/%d=%d",a,b,(a/b));
//		break;
//		case '*':
//			printf("%d*%d=%d",a,b,(a*b));
//		break;
//		default:
//			printf("Invalid input");
//		break;
//		
//	}
//	return 0;
//}

int main(){
	char vowel;
	printf("Enter any alphabet: ");
	scanf("%c",&vowel);
	switch(vowel){
		case 'a':
			printf("a is vowel");
		break;
		case 'e':
			printf("e is vowel");
		break;
		case 'i':
			printf("i is vowel");
		break;
		case 'o':
			printf("o is vowel");
		break;
		case 'u':
			printf("u is vowel");
		break;
		default:
			printf("consonant");
		break;
			
	}
	
}
