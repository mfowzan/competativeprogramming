#include<stdio.h>

void removeduplicates(int arr[],int length);
int isinarray(int array[],int key);
int length;
int main(void)
{
    int arr[]={3,3,4,5,3,5,2,2,1,6,7,8,1,9};
    length=sizeof(arr)/sizeof(arr[0]);
    printf("Before removing duplicates\n");
    for(int i=0;i<length;i++)
    {
        
        printf("%d ",arr[i]);

    }
    printf("\n");



    
    removeduplicates(arr, length);
    return 0;

}

void removeduplicates(int arr[],int len)
{
    int temp[length];
    temp[0]=arr[0];
    int p=1;
    for (int i=1;i<len;i++)
    {
        temp[i]=0;
    }
    for(int i=1;i<len;i++)
    {
        if (isinarray( temp,arr[i]))
        {
            
            continue;

        }
        else
        {
            temp[p]=arr[i];

            p++;

        }
    }
    printf("After removing duplicates\n");

    for (int j=0;j<p;j++)
    {
        printf("%d ",temp[j]);
    }
}

int isinarray(int array[],int key)
{
    for (int i=0;i<length;i++)
    {
        if (array[i]==0)
        return 0;
        else if(array[i]==key)

        return 1;

    }
}
