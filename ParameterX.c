#include<stdio.h>

void Display(int no1,int no2)
{
   printf("%d %d\n",no1,no2);
}

int main()
{
    int A=11,B=21;

    Display(A,B);  //call by value
    
    return 0;

}
