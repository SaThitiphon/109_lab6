#include <stdio.h>
int main()
{
    int n,i,j,k,ma,mi;
    scanf("%d",&n);
    int a[n][2],count[n],b[n];
    for(i=0;i<n;i++)
    {
        b[i] = i + 1;
    }
    for(i=0;i<n;i++)
    {
        count[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[i][j]==b[k])
                {
                    count[k]++;
                }
            }
        }
    }
    int max,min;
    ma = count[0];
    max = 1;
    mi = count[0];
    min = 1;
    for(i=1;i<n;i++)
    {
        if(ma<count[i])
        {
            ma = count[i];
            max = i + 1;
        }
    }
    for(i=1;i<n;i++)
    {
        if(mi>count[i])
        {
            mi = count[i];
            min = i + 1;
        }
    }
    printf("%d %d",max,min);
    
}
