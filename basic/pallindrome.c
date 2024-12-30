#include<stdio.h>
#include<string.h>


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
    int l=strlen(str)-1;
    int i=0;
    while(i<l)
    {
        if (str[i]!=str[l])
        return 0;
        else
        {
            i++;
            l--;

        }
    }
    return 1;
}