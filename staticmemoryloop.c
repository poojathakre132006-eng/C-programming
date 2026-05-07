#include<stdio.h>

int main()
{
    //static memory allocation
    float Marks[5];   // 20bytes

    int i=0; //loop counter
    printf("enter youe marks : \n");
    
    //Iteration
    
    for(i=0;i<5;i++)
    {
      scanf("%f",&Marks[i]);
    } 
  
    printf("enter marks are:\n");

    //Iteration
    
    for(i=0;i<5;i++)
    {
      printf("%f\n",Marks[i]);
    } 

    return 0;
}
/*
outputs
enter youe marks :
80.1
90.1
95.1
98.1
99.1
enter marks are:
80.099998
90.099998
95.099998
98.099998
99.099998
*/