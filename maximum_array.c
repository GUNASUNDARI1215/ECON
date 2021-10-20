// C program to find the highest element in array 

#include<stdio.h>

int main()
{
	int array[100],i,arr_max,arr_size;
	
	printf("Enter the size of array : ");
	scanf("%d",&arr_size);
	
	arr_max=array[0];
	printf("\nEnter the elements : \n");
	for(i=1;i<=arr_size;i++)
	{
		printf("element[%d]: ",i);
		scanf("%d",&array[i]);
		
		if(array[i]>arr_max)
		{
			arr_max=array[i];
	    }
    }
	printf("The highest element in the array : %d",arr_max);
	
	return 0;
	
}
