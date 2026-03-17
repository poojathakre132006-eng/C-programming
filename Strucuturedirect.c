#include<stdio.h>
#pragma pack(1)
//Declaration
struct Demo
{
    int i;  //4
    char ch; //1
    float f; //4
};
int main()
{
    struct Demo dobj;

    dobj.i=11;
    dobj.ch='A';
    dobj.f=10.0f;

    printf("%d\n",dobj.i);
    printf("%c\n",dobj.ch);
    printf("%f\n",dobj.f);

    return 0;
}