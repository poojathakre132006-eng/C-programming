#include<stdio.h>

struct Hello
{
  float f;    //4
  int Arr[3]; //16
              //20
}hobj;

int main()
{
    printf("size of object is:%lu\n",sizeof(hobj));

    return 0;
}

//lu is used to avoid the error