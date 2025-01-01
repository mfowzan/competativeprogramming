#include<stdio.h>
#include<string.h>

int anagram(char str1[],char str2[],int n);
int main(void)
{
    char str1[]="aac";
    char str2[]="bba";
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
    
    int count[26]={0};
    
    
    for(int i=0;i<n;i++)
    {
        
        count[str1[i]-97]++;
        count[str2[i]-97]--;
       

    }
    for (int i=0;i<26;i++)
    {
        if(count[i]!=0)
        printf("%d\n",count[i]);
        return 0;
    }
    return 1;

}