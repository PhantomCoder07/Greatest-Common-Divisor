// for loop
#include <stdio.h>
int main()
{
    int i,a,b,ans=0;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    for (i=a; i>0; i--)
    {
        if (a%i==0 && b%i==0)
        {
            ans=i;
            break;
        }
    }
    printf ("The GCD of %d and %d is= %d",a,b,ans);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i,a,b,ans=0;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    i=a;
    while (i>0)
    {
        if (a%i==0 && b%i==0)
        {
            ans=i;
            break;
        }
        i--;
    }
    printf ("The GCD of %d and %d is= %d",a,b,ans);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i,a,b,ans=0;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    i=a;
    do
    {
        if (a%i==0 && b%i==0)
        {
            ans=i;
            break;
        }
        i--;
    }
    while (i>0);
    printf ("The GCD of %d and %d is= %d",a,b,ans);
    return 0;
}
// Using recurtion
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
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);
    printf("GCD of number %d and %d is: %d\n",n,m,gcd(n,m));
    return 0;
}
