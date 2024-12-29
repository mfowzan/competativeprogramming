#include<stdio.h>


int main(void)
{
    int arr[]={3,4,5,3,2,9,2};
    int max=arr[0];
    int temp;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<len;i++)
    {
        if (arr[i]>max)
        {
            temp=max;
            max=arr[i];

        }
        
    }
    printf("2nd largest element is: %d",temp);
}