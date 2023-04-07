//wap to find the sum and difference of two matrix
#include <stdio.h>
void main(){
	int a[3][3],i,j,b[3][3];
	for(i=0;i<3;i++){        //rows
		for(j=0;j<3;j++){    //cols
			scanf("%d",&a[i][j]);	
		}
	}
	printf("\nEnter the second matrix \n");
	for(i=0;i<3;i++){        //rows
		for(j=0;j<3;j++){    //cols
			scanf("%d",&b[i][j]);	
		}
		
}


	printf("\nSum of matrix \n");
	for(i=0;i<3;i++){        //rows
		for(j=0;j<3;j++){    //cols
			printf("%d \t",a[i][j]-b[i][j]);	
		}
		printf("\n");
	}
}

