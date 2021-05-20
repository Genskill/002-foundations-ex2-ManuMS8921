#include<stdio.h>
#include<cs50.h>
int main(void)
{
	int i,j,k,n,m;
	
    
    int m = get_int("Which type of pattern where you can enter 1 or 2 ");
    int n = get_int("Enter the row");
	
	
	
	if(m==1)
	{
    	for(i=1;i<=n;i++)
    	{
    		for(j=i;j<n;j++)
    		printf(" ");
    		 	for(k=1;k<=i;k++)
    			 	printf("*");
    	printf("\n");		 	
    	}
	}
	else
	{
    	for(i=n;i>=1;i--)
    	{
    	    for(j=1;j<=i;j++)
    	        printf("*");
    	 printf("\n");                           
    	}
	}	
	return 0;
}
