#include <stdio.h>
struct Address{
	char h_name[25];
	char City[25];
	char S_name[25];
};
struct Employee{
	int Id;
	char Name[25];
	float Salary;
	struct Address Add;
};
int main(){
	struct employee E;
	printf("\n \t Enter Employee Id: ");
	scanf("%d",&E.Id);
	printf("\n \t Enter Employee name: ");
	scanf("%s",&E.Name);
	printf("\n \t Enter Employee slary: ");
	scanf("%f",&E.salary);
	printf("\n \t Enter House Name: ");
	scanf("%s",&E.Add.h_name);
	printf("\n \t Enter Employee city: ");
	scanf("%f",&E.Add.City);
	printf("\n \t Enter Employee street name: ");
	scanf("%f",&E.Add.S_name);
	printf("\n \t Details of Employees");
	return 0;
}



