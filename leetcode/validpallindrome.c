#include<stdio.h>
#include<string.h>
#include<ctype.h>

int validpallindrome(char str[]);

int main(void)
{
    char str[100]="A man, a plan, a canal: Panama";
    //fgets(str,100,stdin);;
    
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

