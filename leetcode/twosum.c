#include<stdio.h>
#include<stdlib.h>
//in c you can return the pointer, not the whole array, the pointer pointing to the first element
int* twoSum(int* nums, int numsSize, int target ) 

{
    int* ans = (int*)malloc(2 * sizeof(int));
    for (int i=0;i<numsSize-1;i++)
    {
        for (int j=i+1;j<numsSize;j++)
        {
            if (nums[i]+nums[j]==target)
            {
            ans[0]=i;
            ans[1]=j;
            return ans;
            }
        }
    }
}

int main(void)
{
    int arr[]={2,7,3,11,5,15};
    int target=20;
    int size=sizeof(arr)/sizeof(arr[0]);
    int* ptr= twoSum(arr,size,target);
    printf("%d  %d ",ptr[0],ptr[1]);

    return 0;

}