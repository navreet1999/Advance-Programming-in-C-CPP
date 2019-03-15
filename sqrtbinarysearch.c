
#include<stdio.h>

int main()
{
	int n,mid=0;
	printf("ENTER THE NUMBER" );
	scanf("%d",&n);
	//printf("\n%d",n);
	int l=1,r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if((mid*mid)>n)
		   r=mid-1;
		else if((mid*mid)<n)
		{
			l=mid+1;
		} 
	    if(l==mid)
	    {
	    printf("square of %d = %d",n,mid-1);
		   break;	
		}
		else if((mid*mid)==n)
		{
		   printf("square of %d = %d",n,mid);
		   break;
	    }
	    
	}
	
}
