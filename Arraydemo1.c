#include<stdio.h>

int main()
{
    char cArr[4]={'A','B','C','D'};
    int iArr[4]={10,20,30,40};
    float fArr[4]={10.0f,20.0f,30.0f,40.0f};
    double dArr[4]={90.00,23.4567,34.7876,67.765};

    printf("size of character array:%lu\n",sizeof(cArr)); //4
    printf("size of interger array:%lu\n",sizeof(iArr));  //16
    printf("size of float array:%lu\n",sizeof(fArr));     //16
    printf("size of double array:%lu\n",sizeof(dArr));    //32
    
    return 0;
}