//program to find large of 3 numbers
#include<stdio.h>
//#include<fowzan.h>
#include <string.h>

int large(int,int);

int main(void)
{
    int a,b,c,r;
    printf("Enter the 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    r=large(large(a,b),c);
    printf("largest number is%d",r);


    return 0;




}

int large(int a ,int b)
{
    if (a>b)
    return a;
    else
    return b;
}