#include <stdio.h>
int main()
{
	int n,a=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for (;n!=0;++a)
	{
		n/=10;
	}
	printf("Count : %d",a);
}
