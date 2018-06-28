#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if((N>=1)&&(N<=10000))
    {
    printf("positive");
    }
    else if(N==0)
    {
    printf("zero");
    }
    else if(N<0)
    {
    printf("negative");
    }
    return 0;
}

