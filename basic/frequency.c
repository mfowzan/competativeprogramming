#include<stdio.h>
#include<string.h>

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

void frequency(char str[])
{
    int asci=0;
    int count[26]={0};
    int l=strlen(str);
    for (int i=0;i<l;i++)
    {
        asci=str[i];
        printf("%d\n",asci);
        printf("%c\n",asci);
        count[asci-97]++;
    }

    for (int k=0;k<26;k++)
    {
        printf("%c : %d\n",k+97,count[k]);
        
    }
    printf("\n\n");

    for (int j=0;j<26;j++)
    {
        if (count[j]>0)
        {
            printf("%c : %d\n",j+97,count[j]);
        }
    }
}