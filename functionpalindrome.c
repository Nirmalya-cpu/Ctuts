#include<stdio.h>
int pal(int x);
int main()
{
    int n,P;
    printf("enter a n:");
    scanf("%d",&n);
    P=pal(n);
    if(P==n)
    {
        printf("num is pailendrome");
    }
    else
    {
        printf("num is not pailendrome");
    }
    return 0;
}
int pal(int x)
{
    int rem,rev=0;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    return(rev);
}