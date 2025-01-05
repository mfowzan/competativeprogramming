#include<stdio.h>
/*
we need to remove the duplicates if they are more than 2

Input: {0,0,0,1,1,1,1,2,3,3,4,5,6}

Expected output of this program:

length of final array 10
0 0 1 1 2 3 3 4 5 6 

*/

int removeduplicates(int nums[], int length)
{
    int i=1;

    for (int j=2;j<length;j++ )
    {
        if (nums[i-1]!=nums[j])
        {
            i++;
            nums[i]=nums[j];

        }
    }
    return i+1;
}

int main(void)
{
    int arr[]={0,0,0,1,1,1,1,2,3,3,4,5,6};
    int l=sizeof(arr)/sizeof(arr[0]);
    int zok=removeduplicates(arr,l);
    printf("length of final array %d\n",zok);

    for (int k=0;k<zok;k++)
    {
        printf("%d ",arr[k]);
    }
}