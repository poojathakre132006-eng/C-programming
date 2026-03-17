#include<stdio.h>

//Declration
struct Demo
{
    int i;  //4
    char ch; //1
    float f; //4
};
int main()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));   //12  
    return 0;
}