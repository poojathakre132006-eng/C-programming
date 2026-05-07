#include<stdio.h>

int main()
{
    //static memory allocation
    float Marks[5];   // 20bytes

    printf("enter youe marks\n");
    
    scanf("%f",&Marks[0]);
    scanf("%f",&Marks[1]);
    scanf("%f",&Marks[2]);
    scanf("%f",&Marks[3]);
    scanf("%f",&Marks[4]);
    
    printf("enter marks are:\n");

    printf("%f\n",Marks[0]);
    printf("%f\n",Marks[1]);
    printf("%f\n",Marks[2]);
    printf("%f\n",Marks[3]);
    printf("%f\n",Marks[4]);

    return 0;
}
/*
outputs
enter youe marks
67.5
98.6
68.0
56.9
87.9
enter narks are:
67.500000
98.599998
68.000000
56.900002
87.900002
*/