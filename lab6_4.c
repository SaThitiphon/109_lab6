#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n][2],count[n],b[n];
    for(i=0;i<n;i++)
    {
        b[i] = i + 1;
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
    for(i=0;i<n;i++)
    {
        printf("%d ",count[i]);
    }
    
}