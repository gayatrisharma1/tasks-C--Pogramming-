// multiplication table
#include<stdio.h>

void main()
{
    int i,ans,input;
     printf("Enter number : ");
    scanf("%d",&input);
    for(i=1;i<11;i++)
    {
    ans = input * i;
    printf("%d * %d = %d\n",input,i,ans);
    }
}