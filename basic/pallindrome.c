#include<stdio.h>
#include<string.h>
#include<ctype.h>


int ispallindrome(char str[]);

int main(int argc, char* argv[])
{
    if (argc !=2)
    {
        printf("Error! Two command line arguments required");
        return 1;
    }

    if (ispallindrome(argv[1]))
    {
        printf("is pallindrome");
        return 0;
    }
    printf("not pallindrome");
    return 0;
}

int ispallindrome(char str[])
{
    int l=strlen(str);
    int left=0;
    int right=l-1;
    while(left<right)
    {
        if (isalnum(str[left] && isalnum(str[right])))
        {
            char leftchar = tolower(str[left]);
            char rightchar = tolower(str[right]);
            if (leftchar!=rightchar)
            {
                return 0;
            }
            left++;
            right--;
        }

        if (!isalnum(str[left])) left++;
        if (isalnum(str[right])) right--;
        
    }
    return 1;
}