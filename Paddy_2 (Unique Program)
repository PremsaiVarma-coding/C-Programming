#include<stdio.h>
int main()
{
    int tc[100],i,j,k,n,count;
    printf("Please enter the number of programs: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&tc[i]);
    }
    for(j=0;j<n;j++)
    {
        count=0;
        for(k=0;k<n;k++)
        {
            if(tc[j]!=tc[k] && j!=k)
            {
                count++;
            }
        }
        if(count==n-1)
        {
            printf("%d ",tc[j]);
        }
    }
    return 0;
    
}
