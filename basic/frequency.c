#include<stdio.h>
#include<string.h>
#include<ctype.h>

void frequency(char str[]);
int main(int argc, char* argv[])
{
    if (argc!=2)
    {
        printf("ERROR! Command line arguments not of the form --> ./filename stringvalue ");
        return 1;
    }

  frequency(argv[1]);
}
/*we create an array count[] which can store 26 integers, we use it to store the count of each character, basically converting each character into their ascii value and finding their
ascii value, for eg for small a, ascii value is 97, so we subtract it from 97, 97-97=0, so its index in count[] will be 0. similarly we do it for all characters in a string */
void frequency(char str[])
{
    int count[26]={0};
    int l=strlen(str);
    for (int i=0;i<l;i++)
    {   
        if (isalnum(str[i]))
    {
        char chr=tolower(str[i]);
        count[chr-'a']++;
    }
    }


    for (int i=0;i<26;i++)
    {
        if (count[i]>0)
        {
            printf("%c : %d\n",i+97,count[i]);
        }
    }
}