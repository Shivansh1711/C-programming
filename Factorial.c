#include <stdio.h>
int main()
{
	int n,a,res=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	for (a=n;a>=1;a--)
	{
		res=res*a;
		printf("* %d : %d\n",a,res);
	}
	printf("Factorial of %d is %d",n,res);
}
