#include <stdio.h>
int main()
{
    int n,i,m,c1=0,c2=0,num1,num2;
    scanf("%d",&n);
    scanf("%d %d",&num1,&num2);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        m = num1 % 10;
        a[i] = m;
        num1 = num1 / 10;
    }
    for(i=0;i<n;i++)
    {
        m = num2 % 10;
        b[i] = m;
        num2 = num2 / 10;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    printf("%d %d",c1,c2);
}