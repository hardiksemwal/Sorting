#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in the array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubblesort(a,n);
    return 0;
}

void bubblesort(int a[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
