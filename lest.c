#include<stdio.h>
int main()
{
    int a[100],i,n,k,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no of dig");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        if(a[i]<a[j])
        {
            a[i]=a[j];
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d",&a[i]);
    }    
    return 0;
}
