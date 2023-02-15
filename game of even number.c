
#include <stdio.h>
int main()
{
    int a=1,n;
    while (a<=3)
    {
    printf("Enter an even number :");
    scanf("%d",&n);
    a++;
    if (n%2==0)
    {printf("You did this in %d attempt",a-1);
    break;}
    }

}