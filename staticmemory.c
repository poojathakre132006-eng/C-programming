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
    

    return 0;
}
/*
outputs
enter youe marks
1
80.1
90.1
95.2
35.0
*/