#include<stdio.h>
#include<string.h>

int anagram(char str1[],char str2[],int n);
int main(void)
{
    char str1[]="silent";
    char str2[]="listen";
    int n=strlen(str1);
    if (anagram(str1,str2,n))
    {
        printf("anagarm");
    }
    else
    printf("not anagram");


}
int anagram(char str1[],char str2[],int n)
{
    
    int arr1[n];
    int arr2[n];
    int sum1,sum2=0;
    
    for(int i=0;i<n;i++)
    {
        arr1[i]=str1[i];
        sum1+=arr1[i];
       
        
        arr2[i]=str2[i];
        sum2+=arr2[i];
       

    }
    if (sum1==sum2)
    return 1;
    else
    return 0;

}