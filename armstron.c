#include <stdio.h>
int main()
{
    int n,o, r, result = 0,a,b,i;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);
printf("Enter the limit:");
scanf("%d%d",&a&b);
for(i=1;i<=b,i>=a:i++)
{
    o = n;

    while (o != 0)
    {
        r = o%10;
        result += r*r*r;
        o /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
}
    return 0;
}
