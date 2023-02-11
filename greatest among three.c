#include <stdio.h>
//not solved don't run
int main()
{
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d",&a,&b,&c);
	
	if (a>b && a>c)
	printf("%d is greater than %d and %d",a,b,c);
	else if (b>a && b>c)
	printf("%d is greater than %d and %d",b,a,c);
	else if (c>a && c>b)
	printf("%d is greater than %d and %d",c,a,b);
	else if (a>b && a<c)
	printf("%d is greater than %d and %d",c,a,b);
	else if (b>a && b<c)
	printf("%d is greater than %d and %d",c,a,b);
	else if (c>a && c<b)
	printf("%d is greater than %d and %d",b,a,c);
	else if (c>b && c<a)
	printf("%d is greater than %d and %d",a,b,c);
	else if (a>c && a<b)
	printf("%d is greater than %d and %d",b,a,c);
	else if (b>c && b<a)
	printf("%d is greater than %d and %d",a,b,c);
	else
	printf("All three are equal");
}
