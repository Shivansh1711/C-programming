#include <stdio.h>
int main()
{
	int n,a,count=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for (a=2;a<n;a++)
	{  
		if (n%a==0)
	    {
	        count++;
		break;
    	}
    }
    	if (count!=0)
		{
		printf("Not Prime\n");
	    }
	    else
	    {
	        if (n==1)
	        printf("Not prime");
	        else
	        {
	        printf("Prime");
	        }
	    }
}
