// for loop
#include <stdio.h>
int main()
{
    int i,a,b,c,ans=0;
    printf ("Enter three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    for (i=a; i>0; i--)
    {
        if (a%i==0 && b%i==0 && c%i==0)
        {
            ans=i;
            break;
        }
    }
    printf ("The GCD of %d, %d and %d is= %d",a,b,c,ans);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i,a,b,c,ans=0;
    printf ("Enter three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    i=a;
    while (i>0)
    {
        if (a%i==0 && b%i==0 && c%i==0)
        {
            ans=i;
            break;
        }
        i--;
    }
    printf ("The GCD of %d, %d and %d is= %d",a,b,c,ans);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i,a,b,c,ans=0;
    printf ("Enter three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    i=a;
    do
    {
        if (a%i==0 && b%i==0 && c%i==0)
        {
            ans=i;
            break;
        }
        i--;
    }
    while (i>0);
    printf ("The GCD of %d, %d and %d is= %d",a,b,c,ans);
    return 0;
}
// Function
#include <stdio.h>
int gcd (int a, int b)
{
    if (a==b)
        return a;
    if (a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("GCD of numbers: %d\n",gcd(gcd(a,b),gcd(b,c)));
    return 0;
}
