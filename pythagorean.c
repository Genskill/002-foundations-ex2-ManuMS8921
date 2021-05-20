#include<stdio.h>
int main()
{
	float k,n,m,i;
	
    
    float n = get_float("Enter the number");
    float m = get_float("Enter the number");
    float k = get_float("Enter the number");
    
    i=n*n+m*m;
    if(i==k*k)
    printf("YES,Sides of right angled triangle");
    else
    printf("FAIL,not a sides of right angled triangle");

	
	return 0;
}
