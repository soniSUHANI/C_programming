//wap to implement binary search
#include <stdio.h>
int main()
{
	int a[100],i,beg,mid,end,n,key,loc;
	printf("Enter array size");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	beg=0;
	end=n-1;
	printf("Enter elements to search");
	scanf("%d",&key);
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==key)
		{
			loc=mid;
			break;
		}
		else if(a[mid]>key)
		{
			end=mid-1;
		}
		else if(a[mid]<key)
		{
			beg=mid+1;
		}
	}
}

