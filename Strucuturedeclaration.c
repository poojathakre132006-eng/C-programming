#include<stdio.h>

//Declration
struct Demo
{
    int i;  //4
    float f; //4
};
int main()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));    
    return 0;
}