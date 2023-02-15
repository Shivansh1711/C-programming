#include <stdio.h>
int main() 
{
    int n,i,a,d;
    printf("Enter a number upto n terms : ");
    scanf("%d",&n);
    printf("Enter first number for AP : ");
    scanf("%d",&a);
    printf("Common differnce : ");
    scanf("%d",&d);
    for(i=a;i<(n*d)+1;i=i+d)
    {
        printf("%d ",i);
    }
}
