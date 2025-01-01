#include<stdio.h>
#include<string.h>

int strlength(char str[]);

int main(void)
{
    char str[]="fowz";
    printf("%d",strlength(str));

}

int strlength(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
        

    }
    return i;
}