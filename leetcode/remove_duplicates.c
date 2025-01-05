#include <stdio.h>

//function to calculate the number of unique elements and remove the duplicates in the input array

int duplicates(int nums[],int size)
{
    int left=0;
    int right=1;

    for (int right=1;right<size;right++)
    {
        if (nums[left]!= nums[right])
        {
            nums[left+1]=nums[right];
            left++;
        }
    }
    return left+1;
}


int main(void)
{
    int nums[]={0,0,1,1,1,2,2,3,3,3,4};
    int size=sizeof(nums)/sizeof(nums[0]);
    int l=duplicates(nums,size);
    printf("%d",l);



}


