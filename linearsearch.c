#include<stdio.h>
int main()
{
    int a[10],i,n,x,flag=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("element found at positin %d\n",i);
            flag=1;
        }

    }
    if(flag==0)
    {
        printf("element not present");
    }
    return 0;
}