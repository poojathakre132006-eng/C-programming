#include<stdio.h>

int main()
{
    char ch='A';
    char *ptr=&ch;

    int i=11;
    int *iptr=&i;

    float f=90.99f;
    float *fptr=&f;

    double d=78.67890;
    double *dptr=&d;

    printf("%c\n",*ptr);
    printf("%d\n",*iptr);
    printf("%f\n",*fptr);
    printf("%lf\n",*dptr);  


    return 0;
}