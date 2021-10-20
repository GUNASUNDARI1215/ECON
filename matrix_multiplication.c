// C Program for matrix multiplication

#include<stdio.h>

int main()
{
	int arows,acolumns,brows,bcolumns;
	int i,j,k;
	int sum=0;
	
	//MATRIX A
	printf("Enter the number of rows and columns of matrix A: ");
	scanf("%d %d",&arows,&acolumns);
	int a[arows][acolumns];
	
	printf("Enter the elements of matrix a :\n" );
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	//MATIX B
	printf("Enter the number of rows and columns of matrix B: ");
	scanf("%d %d",&brows,&bcolumns);
	int b[brows][bcolumns];
	
	if(brows!=acolumns)
		printf("matrix can't be multiplied");
	else
	{
		printf("Enter the elements of matrix b :\n");
		for(i=0;i<brows;i++)
		{
			for(j=0;j<bcolumns;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
    }
    
    printf("\n");
    
    int product[arows][bcolumns];
    for(i=0;i<arows;i++)
    {
    	for(j=0;j<bcolumns;j++)
    	{
    		for(k=0;k<brows;k++)
    		{
    			sum+=a[i][k]*b[k][j];
        	}
    			product[i][j]=sum;
    			sum=0;
		}
	}
	
	//PRINT THE ARRAY ELEMENTS
	printf("Resultant Matrix: \n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			
			printf("%d ",product[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
