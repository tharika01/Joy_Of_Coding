#include<stdio.h>
int main()
{
	int arr[100],i,j,n,temp;
	printf("Enter size of arr");
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i = 0;i<n;i++)
	{
		for(j = 0;j <n;j++)	
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}	
		}
	}
	/*for(i = 0;i < n;i++)
	{
		printf("%d \n",arr[i]);
	}*/
	printf("%d %d",arr[n-1],arr[n-2]);
	return 0;
}		

