#include<stdio.h>
#include<string.h>
#include<ctype.h>

// time complexity O(n+m), best approach, can't optimize it more

int anagram(char str1[], char str2[]);

int main(void)
{
    char str1[]="OhhlistenotuMmyxsilent!";
    char str2[]="my silentxmouth!silent???oh";
    if (anagram(str1,str2))
    printf("haan ji");
    else
    printf("nahi");


}

int anagram(char str1[],char str2[])
{
    int count[26]={0};

    int l1=strlen(str1);
    int l2=strlen(str2);
    for (int i=0;i<l1;i++)
    {
        if (isalnum(str1[i]))
        {
            char char1=tolower(str1[i]);
            count[str1[i]-'a'];


        }
    }
    for (int i=0;i<l2;i++)
    {
        if (isalnum(str2[i]))
        {
            char char1=tolower(str2[i]);
            count[str2[i]-'a'];
            

        }
    }
    for (int i=0;i<26;i++)
    {
        if (count[i]!=0)
        return 0;
        
    }
    return 1;
}