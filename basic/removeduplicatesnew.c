#include<stdio.h>


void removeduplicates(int arr[],int len );
int main(void)
{
    int arr[]={3,3,4,5,6,7,6,4,9};
    int length=sizeof(arr)/sizeof(arr[0]);
    removeduplicates(arr,length);
    return 0;
}

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
