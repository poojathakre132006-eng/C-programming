#include<stdio.h>
int main()
{
    int No;
    printf("Enter the number");
    scanf("%d",&No);
    
    if(No%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}