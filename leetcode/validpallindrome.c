#include<stdio.h>
#include<string.h>
#include<ctype.h>

int validpallindrome(char str[]);

int main(void)
{
    //fgets keeps last element as \n beacsue when we press enter, it keeps the newline character in the string as well, the last charcter of the string will be \n
    char str[100]="A man, a plan, a canal: Panama";
    //fgets(str,100,stdin);
    
    if (validpallindrome(str)) printf("pallindrome");
    else printf("not pallindrome");

}
int validpallindrome(char str[])
{
    int l=strlen(str);
    int left=0;
    int right=l-1;
    if (l==1) return 1;
    while (left<right)
    {
        if (isalnum(str[left]) && isalnum(str[right]))
        {
            char leftchar=tolower(str[left]);
            char rightchar=tolower(str[right]);
            if (leftchar!=rightchar)
            return 0;

            left++;
            right--;

        }
        if (!isalnum(str[left])) left++;
        if(!isalnum(str[right])) right--;
    }
    return 1;

}

