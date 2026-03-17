#include<stdio.h>
#pragma pack(1)
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

    printf("%d\n",sizeof(dobj));    //9
    return 0;
}