#include<stdio.h>

void removeduplicates(int arr[],int len );

int main(void)
{
    int arr[]={3,3,4,5,6,7,6,4,9};
    int length=sizeof(arr)/sizeof(arr[0]);
    removeduplicates(arr,length);
    return 0;
}

/* we use  a seen[] array to keep track of elements we encounter, when we see lets say 3, first we check if seen[3]==0,
if its not 0 then we skip adding it to our temporary array temp[], if its 0 then we first make it 0 and then add the number to temp[] and also increment p
p is a pivot, it will move forward with temp and will finally give us the last index value of temp (the length of temp) so that we can iterate till p only otherwise we will have
to iterate over large temp[]. */

void removeduplicates(int arr[], int len)
{
    int seen[1000]={0};
    int temp[len];
    int p=0;

    for (int i=0;i<len;i++)
    {
        if (!seen[arr[i]])
        {
            seen[arr[i]]=1;
            temp[p++]=arr[i];
        }
    }

    printf("array after removing duplicates\n");
    for(int i=0;i<p;i++)
    {
        printf("%d ",temp[i]);
    }
}
