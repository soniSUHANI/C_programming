# include <stdio.h>
int main()
{
	int a[50],n,loc=-1,key,beg,last,mid,i;
	printf("\n Enter number of array elements");
	scanf("%d",&n);
	printf("\n Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	beg=0;
	last=n-1;
	printf("\n Enter element to search");
	scanf("%d",key);
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if (a[mid]==key)
		{
			loc=mid;
			break;
		}
		else if(a[mid]>key)
		{
		    last=mid-1;
		}
	    else if (a[mid]<key)
    	{
	    	beg=mid+1;
     	}
	
   	}
   	if(loc!=-1){
   		printf("Element found at %d",loc+1);
	   }
	   else{
	   	printf("Element not found")
	   }

}
